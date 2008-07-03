/*
* Copyright 2006 Sony Computer Entertainment Inc.
*
* Licensed under the MIT Open Source License, for details please see license.txt or the website
* http://www.opensource.org/licenses/mit-license.php
*
*/
// #define HEAP_DEBUG   // Define this to turn on windows heap debugging

#define CFX_PLATFORM_INCLUDE <cfxOSX.h>

#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

#include "Crt/CrtMatrix.h"
#include "Crt/CrtNode.h"
#include "Crt/CrtScene.h"
#include "Crt/CrtRender.h"
#include "dae.h"
#include "dae/daeErrorHandler.h"
#include <stdio.h>

#include <cfxLoader.h>
#include <cfxEffect.h>
#include <cfxMaterial.h>
#include <cfxPlatform.h>  // !!!GAC just needed for testing

CGparameter amplitudeGlobalParameter = 0;  //!!!GAC for demo of how to hookup the UI to a param

// Window Active Flag Set To TRUE By Default

static bool	fullscreen = true;	

static int	MainWindow = 0;

static bool	CreateGLWindow(int LArgC, char** LArgV, CrtChar* title, CrtInt32 width, CrtInt32 height, bool fullscreenflag);
static GLvoid	DestroyGLWindow(GLvoid);							
static void	DrawGLScene(void);
static CrtInt32	InitGL(GLvoid);									
static GLvoid	ResizeGLScreen(GLsizei width, GLsizei height);		

class cfxDaeErrorHandler : public daeErrorHandler
{
public:
	cfxDaeErrorHandler()
	{
		setErrorHandler(this);
	}

	void handleError(daeString msg)
	{
		CrtPrint( "DOM Error: %s\n", msg );
	}

	void handleWarning(daeString msg)
	{
		CrtPrint( "DOM Warning: %s\n", msg );
	}
} gErrorHandler;

//----------------------------------------------------------------------------------------------------
// Between here and the next double line is non-windows specific UI code, you can cut/paste this into
// your own code to enable a similar keyboard/mouse based UI.
// NOTE: the original version of this code is in COLLADA_RT_VIEWER mainPC.cpp, if you make changes
// or fix bugs, please fix them there too.
//----------------------------------------------------------------------------------------------------
// Multipliers we use to scale the speed of the UI
CrtFloat	MouseRotateSpeed = 5.0f;
CrtFloat	MouseWheelSpeed = 0.005f;
CrtFloat	MouseTranslateSpeed = 0.1f;
CrtFloat	KeyboardRotateSpeed = 10.0f;
CrtFloat	KeyboardTranslateSpeed = 10.0f;
CrtRender   _CrtRender;   // Global to access the extra camera transform matrix in the CRT renderer



// Imitate Windows MessageBox
//
void MessageBox(char* LSomething, char* LMessage, char* LTypeStr, int LButtons)
{
 (void)LSomething;
 (void)LButtons;
printf("%s() %s %s\n", __FUNCTION__, LTypeStr, LMessage);fflush(stdout);
}



// Function to adjust all the UI speeds (keyboard and mouse) by a common multiplier
void AdjustUISpeed(CrtFloat multiplier)
{
	MouseRotateSpeed		*= multiplier;
	MouseWheelSpeed			*= multiplier;
	MouseTranslateSpeed		*= multiplier;
	KeyboardRotateSpeed		*= multiplier;
	KeyboardTranslateSpeed	*= multiplier;
}
// The camera selection mechanism is application defined so I put it here rather than in CrtRender
void NextCamera()
{
	static CrtInt CurrentCamNumber = 0;

	// Go to the next camera, if we run out of cameras go back to the first one
	CurrentCamNumber++;
	if(CurrentCamNumber >= _CrtRender.GetScene()->GetCameraInstanceCount())
		CurrentCamNumber = 0;

	// ExtraCameraTransform lets the user move the camera from it's original position in the COLLADA file
	CrtMatrixLoadIdentity(_CrtRender.ExtraCameraTransform);

	// Get the camera instance we want and set it as the active camera
	CrtInstanceCamera *inst = _CrtRender.GetScene()->GetCameraInstance(CurrentCamNumber);
	assert(inst);  // Should never be null
	_CrtRender.SetActiveInstanceCamera(inst);

	CrtPrint("Active camera instance %d on node %s is based on camera %s\n", 
				CurrentCamNumber, 
				inst->Parent->GetName(),
				inst->AbstractCamera->GetName());
}
//----------------------------------------------------------------------------------------------------
// End of non-windows specific UI code
// The code below is somewhat windows specific but only because it uses windows keycodes in "keys"
//----------------------------------------------------------------------------------------------------
bool		keys[256];   // Used to track which keys are held down, the index is the windows
						 // keycode returned by wndProc in wndParm, true means the key is down
// Call ProcessInput once per frame to process input keys
void ProcessInput( bool	keys[] )
{
	//if (keys['U'] )
	//	_CrtRender.SetAnimationOn( CrtFalse ); 
	//if (keys['I'] )
	
	// These keys we don't want to auto-repeat, so we clear them in "keys" after handling them once
	if (keys['A'] && amplitudeGlobalParameter)
	{
		float value;
		cgGetParameterValuefc(amplitudeGlobalParameter, 1, &value);
		value += 0.1;
		cgSetParameter1f(amplitudeGlobalParameter, value);
		keys['A'] = false;
	}
	if (keys['Z'] && amplitudeGlobalParameter)
	{
		float value;
		cgGetParameterValuefc(amplitudeGlobalParameter,1, &value);
		value -= 0.1;
		cgSetParameter1f(amplitudeGlobalParameter, value);
		keys['Z'] = false;
	}
	/*
	if (keys['C'] )
	{
		// When 'C' is pressed, change cameras
		NextCamera();
		keys['C'] = false;
	}
	if ( keys[VK_INSERT] )
	{
		// Speed up UI by 25%
		AdjustUISpeed(1.25f);  
		keys[VK_INSERT] = false;
	}
	if ( keys[VK_DELETE] )
	{
		// Slow down UI by 25%
		AdjustUISpeed(0.75f);  // Go 25% slower
		keys[VK_DELETE] = false;
	}
	if (keys['W'])
	{
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		keys['W'] = false;
	}
	if (keys['Q'])
	{
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
		keys['Q'] = false;
	}
	if (keys['K'])
	{
		_CrtRender.SetShowHiearchy(CrtTrue);
		keys['K'] = false;
	}
	if (keys['L'])
	{
		_CrtRender.SetShowHiearchy(CrtFalse);
		keys['L'] = false;
	}
	if (keys['O'] )
	{
		_CrtRender.SetAnimationPaused( CrtFalse ); 
		keys['O'] = false;
	}
	if (keys['P'] )
	{
		_CrtRender.SetAnimationPaused( CrtTrue );
		keys['P'] = false;
	}
	if (keys[VK_F1])		
	{
		keys[VK_F1]=FALSE;		
		DestroyGLWindow();			
		fullscreen=!fullscreen;		
		// Recreate Our OpenGL Window
		if (!CreateGLWindow(LArgC, LArgV, "COLLADA_RT ", 1024, 768, fullscreen))
		{
			exit(1);
		}
		keys[VK_F1] = false;
	}
	
	// These keys that do a function as long as they are held down, so we don't clear "keys".
	// Remember to scale these functions by time!

	if ( keys[VK_UP])
	{
		// UI code to rotate camera up
		CrtMatrix4x4RotateAngleAxis(_CrtRender.ExtraCameraTransform, 1.0f, 0.0f, 0.0f, _CrtRender.GetAnimDelta()  * KeyboardRotateSpeed);			
	}

	if ( keys[VK_DOWN] )
	{
		// UI code to rotate camera down
		CrtMatrix4x4RotateAngleAxis(_CrtRender.ExtraCameraTransform, 1.0f, 0.0f, 0.0f, _CrtRender.GetAnimDelta()  * -KeyboardTranslateSpeed);			
	}
	
	if ( keys[VK_LEFT] )
	{
		// UI code to rotate camera left
		CrtMatrix4x4RotateAngleAxis(_CrtRender.ExtraCameraTransform, 0.0f, 1.0f, 0.0f, _CrtRender.GetAnimDelta()  * KeyboardTranslateSpeed);			
	}

	if ( keys[VK_RIGHT] )
	{
		// UI code to rotate camera right
		CrtMatrix4x4RotateAngleAxis(_CrtRender.ExtraCameraTransform, 0.0f, 1.0f, 0.0f, _CrtRender.GetAnimDelta()  * -KeyboardTranslateSpeed);			
	}

	if ( keys['R'] )
	{
		// UI code to move the camera closer
		CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, 0.0, 0.0, _CrtRender.GetAnimDelta() * KeyboardTranslateSpeed);
	}

	if ( keys['F'] )
	{
		// UI code to move the camera farther away
		CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, 0.0, 0.0, _CrtRender.GetAnimDelta() * -KeyboardTranslateSpeed);
	}

	if ( keys['T'] )
	{
		// UI code to move the camera farther up
		CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, 0.0, _CrtRender.GetAnimDelta() * KeyboardTranslateSpeed, 0.0);
	}

	if ( keys['G'] )
	{
		// UI code to move the camera farther down
		CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, 0.0, _CrtRender.GetAnimDelta() * -KeyboardTranslateSpeed, 0.0);
	}

	if ( keys['Y'] )
	{
		// UI code to move the camera farther right
		CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, _CrtRender.GetAnimDelta() * KeyboardTranslateSpeed, 0.0, 0.0);
	}

	if ( keys['H'] )
	{
		// UI code to move the camera farther left
		CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, _CrtRender.GetAnimDelta() * -KeyboardTranslateSpeed, 0.0, 0.0);
	}
*/
}


//----------------------------------------------------------------------------------------------------
// The remainder of this code is windows specific, to see how the UI is implemented look for comments
// marked "UI".  To manipulate the camera you just use CrtMatrixTranslate and CrtMatrix4x4RotateAngleAxis
// to modify the transform matrix in _CrtRender.ExtraCameraTransform.  This transform is concatenated 
// with the camera right before rendering starts.  I recommend you always reset this matrix when 
// changing cameras to prevent users from getting lost.
//----------------------------------------------------------------------------------------------------

static void KeyboardCallback(const unsigned char LKey, const int LX, const int LY)	
{
 (void)LKey;
 (void)LX;
 (void)LY;
	printf("Key press %c x=%d, y=%d\n", LKey, LX, LY);
	keys[LKey] = true;
	ProcessInput(keys);

	switch (LKey)									
	{
/*		case WM_KEYDOWN:						
		{
			// We only want to know which keys are down, so if this was an auto-repeat, ignore it
			if(!(HIWORD(lParam) & KF_REPEAT))
			{
				// Remember which keys are being held down
				keys[wParam] = TRUE;
			}
			return 0;							
		}

		case WM_KEYUP:							
		{
			keys[wParam] = FALSE;				
			return 0;							
		}

		case WM_SIZE:							
		{
			ResizeGLScreen(LOWORD(lParam),HIWORD(lParam));
			return 0;								
		}
/*		case WM_MOUSEWHEEL:
		{
			float gcWheelDelta = (short) HIWORD(wParam);
			CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, 0.0f, 0.0f, gcWheelDelta * MouseWheelSpeed);
			return 0;
		}
		case WM_MBUTTONDOWN:
		{
			// Change camera
			NextCamera();
			return 0;
		}
		case WM_MOUSEMOVE:
		{
			// UI code to move camera in response to mouse movement.
			static float lastx = 0, lasty = 0;
			static int	 lastLeft = 0, lastRight = 0;
			// Retrieve mouse screen position and button state
			int x=(short)LOWORD(lParam);
			int y=(short)HIWORD(lParam);
			bool leftButtonDown=wParam & MK_LBUTTON;
			bool rightButtonDown=wParam & MK_RBUTTON;
			// Handle rotations if left button was pressed
			if(leftButtonDown)
			{
				if(lastLeft)
				{
					// Figure how much the mouse moved and rotate
					CrtMatrix4x4RotateAngleAxis(_CrtRender.ExtraCameraTransform, 0.0f, 1.0f, 0.0f, (lastx - (float)x) * MouseRotateSpeed);			
					CrtMatrix4x4RotateAngleAxis(_CrtRender.ExtraCameraTransform, 1.0f, 0.0f, 0.0f, (lasty - (float)y) * MouseRotateSpeed);			
					lastx = x;
					lasty = y;
				}
				else
				{
					// Remember where the mouse was when it first went down.
					lastLeft = true;
					lastx = x;
					lasty = y;
					return 0;
				}
			}
			else
			{
				lastLeft = false;
			}
			if(rightButtonDown)
			{
				// Was the mouse previously down?
				if(lastRight)
				{
					CrtMatrixTranslate(_CrtRender.ExtraCameraTransform, (lastx - (float)x) * -MouseTranslateSpeed, (lasty - (float)y) * MouseTranslateSpeed, 0.0f);
					lastx = x;
					lasty = y;
				}
				else
				{
					// Remember that the button was down, and where it went down
					lastRight = true;
					lastx = x;
					lasty = y;
					return 0;
				}
			}
			else
			{
				lastRight = false;
			}
			return 0;
		}
 */
	}
}

float g_mouse_x, g_mouse_y;
float g_mouse_move_multipler = 0.5;
int g_mouse_button_pressed[3] = {GLUT_UP, GLUT_UP, GLUT_UP};
void MouseCallback(int button, int state, int x, int y)
{
	switch(button)
	{
		case GLUT_LEFT_BUTTON:
			g_mouse_button_pressed[GLUT_LEFT_BUTTON] = state;
			break; 
		case GLUT_MIDDLE_BUTTON:
			g_mouse_button_pressed[GLUT_MIDDLE_BUTTON] = state;
			break;
		case GLUT_RIGHT_BUTTON:
			g_mouse_button_pressed[GLUT_RIGHT_BUTTON] = state;
			break;
		default:
			break;
	}
	g_mouse_x = x; g_mouse_y = y;
	printf("button %d state %d\n", button, state);	
}

void MotionCallback(int x, int y)
{
	float delta_x = ((float)x-g_mouse_x) * g_mouse_move_multipler;
	float delta_y = ((float)y-g_mouse_y) * g_mouse_move_multipler;
	
	if (g_mouse_button_pressed[GLUT_LEFT_BUTTON] == GLUT_DOWN)
	{
		_CrtRender.ActiveInstanceCamera->SetPanAndTilt(delta_x * MouseRotateSpeed, delta_y * MouseRotateSpeed);
		CrtMatrixCopy(_CrtRender.ActiveInstanceCamera->transform, _CrtRender.ExtraCameraTransform);
	}
	if (g_mouse_button_pressed[GLUT_MIDDLE_BUTTON] == GLUT_DOWN)
	{
		_CrtRender.ActiveInstanceCamera->MoveOrbit(delta_x * MouseRotateSpeed, delta_y * MouseRotateSpeed);
		CrtMatrixCopy(_CrtRender.ActiveInstanceCamera->transform, _CrtRender.ExtraCameraTransform);
	}
	
	if (g_mouse_button_pressed[GLUT_RIGHT_BUTTON] == GLUT_DOWN)
	{
		_CrtRender.ActiveInstanceCamera->ZoomTransform(delta_y * MouseRotateSpeed);
		CrtMatrixCopy(_CrtRender.ActiveInstanceCamera->transform, _CrtRender.ExtraCameraTransform);
	}
	
	g_mouse_x = x; g_mouse_y = y;
	printf("(%f, %f)\n", delta_x, delta_y);
}


int main(int LArgC, char** LArgV)
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);

	// Set the default screen size
	_CrtRender.SetScreenWidth( 640);
	_CrtRender.SetScreenHeight( 480);

	// Create an OpenGL Window
	if (!CreateGLWindow(LArgC, LArgV, "COLLADA_RT, the COLLADA_DOM Sample Viewer for PC", _CrtRender.GetScreenWidth(), _CrtRender.GetScreenHeight(), fullscreen))
	{
		return 0;									
	}

	InitGL();

	// Initialize the renderer
	// !!!GAC for compatibility with the new COLLADA_FX code, Init now forces UsingCg and UsingVBOs to
	// !!!GAC false.  It also calls CrtInitCg, creating the CG context and calling cgGLRegisterStates.
	// !!!GAC All these things are currently required for the cfx rendering path to work, changing them
	// !!!GAC may cause problems.  This is work in progress and will be much cleaner when the refactor is done.
	
	_CrtRender.Init();
	//_CrtRender.SetRenderDebug( CrtTrue ); 

	// !!!GAC kept for reference, changing these may cause problems with the cfx include path
	//_CrtRender.SetUsingCg( CrtFalse );
	// Turn off VBOs (the GL skinning path doesn't work with VBOs yet)
	//_CrtRender.SetUsingVBOs( CrtTrue ); 
	//_CrtRender.SetUsingNormalMaps( CrtTrue ); 	
	//_CrtRender.SetRenderDebug( CrtTrue ); 

//printf("%s()\n", __FUNCTION__);fflush(stdout);return(0);

	// Load the file name provided on the command line
	if(LArgC > 1 && LArgV[1])
	{
printf("%s() %s\n", __FUNCTION__, LArgV[1]);fflush(stdout);
		if ( !_CrtRender.Load( LArgV[1] ))
		{
			exit(0);
		}
	}

	// This block of code shows how to enumerate all the effects, get their parameters and then
	// get their UI information.
#if 0
	if(_CrtRender.GetScene())
	{
		// Get the scene and setup to iterate over all the effects stored in the cfxLoader
		CrtScene *scene = _CrtRender.GetScene();


		std::map<std::string, cfxEffect*>::iterator effectIterator;
		effectIterator = scene->cfxEffects.begin();
		// Iterate over all the effects
		while(effectIterator != scene->cfxEffects.end())
		{
			// This is the effect name you would use in a UI
//			CrtPrint("Effect name %s\n", effectIterator->first.c_str());
			cfxEffect *thiscfxEffect = effectIterator->second;
			CGeffect thisCGEffect = thiscfxEffect->getEffect();
			CGparameter thisCGParameter = cgGetFirstEffectParameter(thisCGEffect);
			while(thisCGParameter != NULL)
			{
				// This is the parameter name you would use in the UI
				const char *parameterName = cgGetParameterName(thisCGParameter);
				// This is for the example of how to tweek a parameter (doesn't work yet)
				if(CrtCmp(parameterName, "Amplitude"))
				{
					// Capture the parameter and save it in a global, in a GUI you would
					// save this handle in the widget so it would know what to tweek.
					amplitudeGlobalParameter = thisCGParameter;
				}
#if 0
				// This is here for debugging, it iterates over all the annotations and prints them out
				// so you can see what's in them.  Normally this code will be turned off.
				CrtPrint("  Parameter name %s\n",parameterName);
				CGannotation dbgCGAnnotation = cgGetFirstParameterAnnotation(thisCGParameter);
				while(dbgCGAnnotation != NULL)
				{
					const char *annotationName = cgGetAnnotationName(dbgCGAnnotation);
					CrtPrint("      Annotation: %s",annotationName);
					if(cgGetAnnotationType(dbgCGAnnotation) == CG_STRING)
					{
						const char *annotationString = cgGetStringAnnotationValue(dbgCGAnnotation);
						CrtPrint(" value: %s\n",annotationString);
					}
					else if(cgGetAnnotationType(dbgCGAnnotation) == CG_FLOAT)
					{
						int nvalues; 
						const float *value = cgGetFloatAnnotationValues(dbgCGAnnotation, &nvalues);
						CrtPrint(" value: %f\n",*value);  // Assume there is one value
					}
					else
					{
						CrtPrint("\n");
					}
					dbgCGAnnotation = cgGetNextAnnotation(dbgCGAnnotation);
				}
#endif
				// This code looks at the parameter annotations to see if they specify some kind of UI
				// cgGetNamedParameterAnnotation isn't used for this because it is case sensitive and at
				// least some of the annotations FXcomposer uses for UI appear to NOT be case sensitive.
				// This method should collect the parameter values regardless of case, but it has to scan
				// ALL the parameters and do case-blind compares on each one, which is slower.
				// This code currently only collects the annotation values for defining sliders and color pickers.
				const char *UIName		= "unknown";
				const char *UIWidget	= "unknown";
				float UIMin				= -99999.0f;
				float UIMax				= 99999.0f;
				float UIStep			= 0.0f;
				int   nvalues;
				CGannotation thisCGAnnotation = cgGetFirstParameterAnnotation(thisCGParameter);
				// Iterate over all the annotations
				while(thisCGAnnotation != NULL)
				{
					// Get the name of this annotation
					const char *annotationName = cgGetAnnotationName(thisCGAnnotation);
					// Do case-blind compares to see if the annotation is one of the ones used to make UI
					// and save the value if it is.
					if(CrtICmp("UIWidget",annotationName))
					{
						// This is the widget type
						UIWidget = cgGetStringAnnotationValue(thisCGAnnotation);
					}
					if(CrtICmp("UIName",annotationName))
					{
						// This is the name to attach to the widget
						UIName = cgGetStringAnnotationValue(thisCGAnnotation);
					}
					if(CrtICmp("UIMin",annotationName))
					{
						// This is the minimum value for a slider widget
						const float *value = cgGetFloatAnnotationValues(thisCGAnnotation, &nvalues);
						if(nvalues == 1)
							UIMin = *value;
					}
					if(CrtICmp("UIMax",annotationName))
					{
						// This is the maximum value for a slider widget
						const float *value = cgGetFloatAnnotationValues(thisCGAnnotation, &nvalues);
						if(nvalues == 1)
							UIMax = *value;
					}
					if(CrtICmp("UIStep",annotationName))
					{
						// This is the step (minimum change) for a slider widget
						const float *value = cgGetFloatAnnotationValues(thisCGAnnotation, &nvalues);
						if(nvalues == 1)
							UIStep = *value;
					}
					// Get the next annotation
					thisCGAnnotation = cgGetNextAnnotation(thisCGAnnotation);
				}
				// Is the UIWidget a type that we recognize? (just slider and color picker for now)
				// Replace the CrtPrint with the code that generates the UI, remember the UI needs to
				// store thisCGParameter someplace so it can use it to change the parameter later. 
				if(CrtICmp("slider", UIWidget))
				{
					CrtPrint("Parameter %s needs a slider named %s going from %f to %f with step %f\n",parameterName,UIName,UIMin,UIMax, UIStep );
				}
				if(CrtICmp("color", UIWidget))
				{
					CrtPrint("Parameter %s needs a color picker named %s\n",parameterName,UIName);
				}
				// Move on to the next parameter
				thisCGParameter = cgGetNextParameter(thisCGParameter);
			}
			// Move on to the next effect
			effectIterator++;
		}
	}
#endif

	_CrtRender.SetAnimationOn( CrtTrue ); 

	glutMainLoop();

	_CrtRender.Destroy();

	// Shutdown
	DestroyGLWindow();								

	return(0);						
}


//----------------------------------------------------------------------------------------------------
// Resize And Initialize The GL Window
GLvoid ResizeGLScreen(GLsizei width, GLsizei height)		
{
	// Prevent A Divide By Zero By
	if (height==0)										
	{
		height=1;										
	}

	glViewport(0,0,width,height);						

	glMatrixMode(GL_PROJECTION);						
	glLoadIdentity();									

	// Calculate The Aspect Ratio Of The Window
	gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,100.0f);

	glMatrixMode(GL_MODELVIEW);					
	glLoadIdentity();

	// Reset the renderer's screen size to the new size
	_CrtRender.SetScreenWidth( width);
	_CrtRender.SetScreenHeight( height);
}

//----------------------------------------------------------------------------------------------------
// GL Setup 
CrtInt32 InitGL(GLvoid)
{
	glEnable(GL_TEXTURE_2D);						
	glShadeModel(GL_SMOOTH);						
	glClearColor(0.0f, 0.0f, 1.0f, 0.5f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);							
	glDepthFunc(GL_LEQUAL);								
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	

	glEnable(GL_LIGHT0);								
	glEnable(GL_LIGHTING);

	return true;										
}

//----------------------------------------------------------------------------------------------------
// Main Render 
void DrawGLScene(void)									
{

	// Clear The Screen And The Depth Buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	glLoadIdentity();									

	glMatrixMode(GL_MODELVIEW);							
	glLoadIdentity();									
	
/*	CrtMaterial mat; 

	mat.Ambient = CrtColor3f( 1,1,1 );
	mat.Diffuse = CrtColor3f( 1,1,1 ); 

	glMaterialfv( GL_FRONT_AND_BACK, GL_DIFFUSE,  (GLfloat *)&mat.Diffuse );
	glMaterialfv( GL_FRONT_AND_BACK, GL_AMBIENT, (GLfloat *)&mat.Ambient );
	glMaterialfv( GL_FRONT_AND_BACK, GL_SPECULAR, (GLfloat *)&mat.Specular );
	glMaterialf( GL_FRONT_AND_BACK, GL_SHININESS, (GLfloat )mat.Shininess ); 
*/
	if(_CrtRender.GetScene()) _CrtRender.Render(); 
	glutSwapBuffers();
}

//----------------------------------------------------------------------------------------------------
GLvoid DestroyGLWindow(GLvoid)							
{
}


//----------------------------------------------------------------
// Create Window based on the Width and Height parameters 
//----------------------------------------------------------------
static bool CreateGLWindow(int LArgC, char** LArgV, CrtChar* title, CrtInt32 width, CrtInt32 height, bool fullscreenflag)
{
	fullscreen = fullscreenflag;			

	glutInit(&LArgC, LArgV);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);
	MainWindow = glutCreateWindow(title);

	glutDisplayFunc(DrawGLScene);
	glutIdleFunc(DrawGLScene);
	glutKeyboardFunc(KeyboardCallback);
	glutReshapeFunc(ResizeGLScreen);
	glutMouseFunc(MouseCallback);
	glutMotionFunc(MotionCallback);

	glutReshapeWindow(width, height);
	ResizeGLScreen(width, height);					

	return true;									
}
