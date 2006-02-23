/*
 * Copyright 2006 Sony Computer Entertainment Inc.
 *
 * Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 * file except in compliance with the License. You may obtain a copy of the License at:
 * http://research.scea.com/scea_shared_source_license.html
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 * implied. See the License for the specific language governing permissions and limitations under the 
 * License. 
 */
//---------------------------------------------------------------------------
// CommandLineOptions
//
// Author: John Bates
// Date: 04/22/02
//
// Description: Creates a structure of command line parameters that can
//  be accessed by their string name.
//
//---------------------------------------------------------------------------

#include "CommandLineOptions.h"
#include <cstdlib>
#include <iostream>

using namespace std;


CommandLineOptions::CommandLineOptions()
{
  global_it = iglobals.begin();
}

CommandLineOptions::CommandLineOptions(const CommandLineOptions *const clo)
{
  aliases = clo->aliases;
  isettings = clo->isettings;
  ioptions = clo->ioptions;
}

CommandLineOptions::~CommandLineOptions()
{
  Unload();
}

void CommandLineOptions::Unload()
{
  for(size_t i=0; i<printouts.size(); i++) {
    delete printouts[i];
  }
  names.clear();
  aliases.clear();
  settings.clear();
  options.clear();
  globals.clear();
  examples.clear();
  printouts.clear();
  isettings.clear();
  ioptions.clear();
  iglobals.clear();
}

void CommandLineOptions::PartiallyUnload()
{
  for(size_t i=0; i<printouts.size(); i++) {
    delete printouts[i];
  }
  names.clear();
  settings.clear();
  options.clear();
  globals.clear();
  examples.clear();
  printouts.clear();
  iglobals.clear();
}

void CommandLineOptions::Load(int argc, char *argv[])
{
  binary_name = argv[0];

  for(int i=1; i<argc; i++) {
    //cout << argv[i];
    if(argv[i][0] == '-') {
      // Get command name
      bool is_alias = false;
      string temp;
      if(argv[i][1] == '-') {
        is_alias = true;
        temp = argv[i] + 2;
      }
      else temp = argv[i] + 1;

      // Exit for help
      if(temp == "?" || temp == "help") _ExitUsage();

      if(_CheckForSetting(temp) && i+1<argc) {
        //cout << ": Setting" << endl;
        isettings[temp] = argv[++i];
      }
      else if(_CheckForOption(temp)) {
        //cout << ": Option" << endl;
        ioptions.insert(temp);
      }
      else {
        // Figure out if this is an option or a setting
        bool opt = true;
        string value;
        while(i+1<argc && argv[i+1][0] != '-') {
          if(!opt) value += " ";
          value += argv[++i];
          opt = false;
        }
        if(opt) {
          cerr << "Warning - Unknown command-line option: -"; 
          if(is_alias) cerr << "-";
          cerr << temp << endl;

          ioptions.insert(temp);
        }
        else {
          cerr << "Warning - Unknown command-line setting: -"; 
          if(is_alias) cerr << "-";
          cerr << temp << " = " << value << endl;

          isettings[temp] = value;
        }

        //_ExitUsage();
      }
    }
    else {
      //cout << ": Global" << endl;
      //string temp = argv[i];
      iglobals.push_back(argv[i]);
    }
  }

  //if(iglobals.size() > globals.size()) {
    //cout << "Command line note: Expected " << globals.size() << " global value";
    //if (globals.size() != 1) cout << "s";
    //cout << ". Got " << iglobals.size() << endl;
  //}
  
  global_it = iglobals.begin();
}

void CommandLineOptions::_NewName(const string& name)
{
  if(!names.insert(name).second) {
    cerr<<"Duplicate tag: \"" << name << "\"";
    exit(1);
  }
}

void CommandLineOptions::SetTitle(const string& name)
{
  title = name;
}

void CommandLineOptions::AddHeading(const string& name)
{
  Heading* he = new Heading();
  he->name = name;
  printouts.push_back(he);
}

void CommandLineOptions::AddExample(const string& example, const string& description)
{
  Example ex;
  ex.input = example;
  ex.description = description;
  examples.push_back(ex);
}

void CommandLineOptions::AddSetting(const string& name, const string& input, const string& description, const string& alias)
{
  AddSetting(name,input,description);
  _AddAlias(name,alias);
}

void CommandLineOptions::AddSetting(const string& name, const string& input, const string& description)
{
  _NewName(name);
  Setting* s = new Setting(); s->name=name; s->input=input; s->description=description;
  settings.push_back(s);
  printouts.push_back(s);
}

void CommandLineOptions::AddOption(const string& name, const string& description, const string& alias)
{
  AddOption(name,description);
  _AddAlias(name,alias);
}

void CommandLineOptions::AddOption(const string& name, const string& description)
{
  _NewName(name);
  Option* s = new Option(); s->name=name; s->description=description;
  options.push_back(s);
  printouts.push_back(s);
}

void CommandLineOptions::AddGlobal(const string& input, const string& description)
{
  Global* g = new Global(); g->input=input; g->description=description;
  globals.push_back(g);
  printouts.push_back(g);
}

void CommandLineOptions::_AddAlias(const string& name, const string& alias)
{
  _NewName(alias);
  aliases[name] = alias;
}

// Will change name to the base name of the setting if name is an alias
bool CommandLineOptions::_CheckForSetting(string& name) const
{
  for(size_t i=0; i<settings.size(); i++) {
    if(settings[i]->name == name) return true;
    else {
      // Check for match with alias
      map<string, string>::const_iterator ci = aliases.find(settings[i]->name);
      if(ci != aliases.end()) {
        if(ci->second == name) {
          name = ci->first;
          return true;
        }
      }
    }
  }
  return false;
}

bool CommandLineOptions::_CheckForOption(string& name) const
{
  for(size_t i=0; i<options.size(); i++) {
    if(options[i]->name == name) return true;
    else {
      // Check for match with alias
      map<string, string>::const_iterator ci = aliases.find(options[i]->name);
      if(ci != aliases.end()) {
        if(ci->second == name) {
          name = ci->first;
          return true;
        }
      }
    }
  }
  return false;
}

const string& CommandLineOptions::_BaseName(const string& name) const
{
  map<string, string>::const_iterator ci = aliases.begin();
  while (ci != aliases.end()) {
    if(ci->second == name) return ci->first;
    ci++;
  }
  return name;
}

bool CommandLineOptions::CheckForSetting(const string& name) const
{
  const string& bname = _BaseName(name);
  return (isettings.find(bname) != isettings.end());
}

bool CommandLineOptions::CheckForOption(const string& name) const
{
  const string& bname = _BaseName(name);
  return (ioptions.find(bname) != ioptions.end());
}

string CommandLineOptions::GetString(const string& name) const
{
  const string& bname = _BaseName(name);
  map<string,string>::const_iterator ci = isettings.find(bname);
  return ci->second;
}

long CommandLineOptions::GetInt(const string& name) const
{
  const string& bname = _BaseName(name);
  map<string,string>::const_iterator ci = isettings.find(bname);
  long n = atoi(ci->second.c_str());
  
  return n;
}

double CommandLineOptions::GetFloat(const string& name) const
{
  const string& bname = _BaseName(name);
  map<string,string>::const_iterator ci = isettings.find(bname);
  double n = atof(ci->second.c_str());
  
  return n;
}

bool CommandLineOptions::GetNextGlobal(string& s)
{
  if(global_it != iglobals.end()) {
    s = *global_it++;
    return true;
  }
  else return false;
}

#define COL1 30
#define COL2 80

void tabspace(size_t num, size_t col1 = COL1)
{
  cerr << " ";
  if(num >= col1)
  {
	return;
  }
  else
  {
	size_t space = col1 - num;
	for(size_t i=0; i<space-1; i++) cout << " ";
  }
}

void paragraph(const string& output, int col1 = COL1, int col2 = COL2)
{
  const size_t line = col2 - col1;
  //size_t len = output.length();
  size_t cpos = 0;
  while(cpos < output.length()) {
    while(output[cpos] == ' ') cpos++; // skip spaces

    size_t chunk = line;
    if(cpos + chunk < output.length()) {
      // search back to the end of a word
      while(output[cpos + chunk] != ' ') chunk--;
    }
    string subout = output.substr(cpos, chunk);
    cpos += chunk;
    cerr << subout << endl;
    if(cpos < output.length()) tabspace(0);
  }
}

void CommandLineOptions::PrintUsage() const
{
  cerr << "--------------------------------------------------------------------------------" << endl;
  cerr << title << " Usage" << endl << binary_name << " ";
  size_t i;

  if(!globals.empty()) {
    //cerr << endl << "          ";
    for(i=0; i<globals.size(); i++) {
      cerr << " [<" << globals[i]->input << ">]";
      if(i == 4 && 5 < globals.size()) {
        cerr << endl;
        tabspace(0, binary_name.length() + 1);
      }
    }
  }

  if(!settings.empty()) {
    cerr << endl;// << "          ";
    tabspace(0, binary_name.length() + 1);
    for(i=0; i<settings.size(); i++) {
      cerr << " [-" << settings[i]->name << " <" << settings[i]->input << ">]";
      if(i == 4 && 5 < settings.size()) {
        cerr << endl;
        tabspace(0, binary_name.length() + 1);
      }
    }
  }

  if(!options.empty()) {
    cerr << endl;// << "          ";
    tabspace(0, binary_name.length() + 1);
    cerr << " [ ";
    for(i=0; i<options.size(); i++) {
      cerr << "-" << options[i]->name << " ";
    }
    cerr << "]";
  }

  cerr << endl << "EXAMPLES" << endl;

  for(i=0; i<examples.size(); i++) {
    examples[i].print(this);
  }

  cerr << endl << "DETAILS" << endl;

  for(i=0; i<printouts.size(); i++) {
    printouts[i]->print(this);
  }

  cerr << "--------------------------------------------------------------------------------" << endl;
}

void CommandLineOptions::_ExitUsage() const
{
  PrintUsage();
  exit(1);
}

CommandLineOptions::Heading::Heading(){}
CommandLineOptions::Heading::~Heading(){}
CommandLineOptions::Heading::Heading(const Heading& rhs) : PrintOut()
{name=rhs.name;}
CommandLineOptions::Heading& CommandLineOptions::Heading::operator=(const Heading& rhs)
{name=rhs.name;return *this;}
void CommandLineOptions::Heading::print(const CommandLineOptions* const clo) const
{
  cerr << name << ":" << endl;
}

CommandLineOptions::Setting::Setting(){}
CommandLineOptions::Setting::~Setting(){}
CommandLineOptions::Setting::Setting(const Setting& rhs) : PrintOut()
{name=rhs.name; input=rhs.input; description=rhs.description;}
CommandLineOptions::Setting& CommandLineOptions::Setting::operator=(const Setting& rhs)
{name=rhs.name; input=rhs.input; description=rhs.description;return *this;}
void CommandLineOptions::Setting::print(const CommandLineOptions* const clo) const
{
  cerr << " -" << name;
  size_t space = 2 + name.length();
  map<string,string>::const_iterator ci;
  if((ci = clo->aliases.find(name)) != clo->aliases.end()) {
    cerr << ", --" << ci->second;
    space += 4 + ci->second.length();
  }
  cerr << " <" << input << ">";
  space += 3 + input.length();
  tabspace(space);
  paragraph(description);
}

CommandLineOptions::Option::Option(){}
CommandLineOptions::Option::~Option(){}
CommandLineOptions::Option::Option(const Option& rhs) : PrintOut()
{name=rhs.name; description=rhs.description;}
CommandLineOptions::Option& CommandLineOptions::Option::operator=(const Option& rhs)
{name=rhs.name; description=rhs.description;return *this;}
void CommandLineOptions::Option::print(const CommandLineOptions* const clo) const
{
  cerr << " -" << name;
  size_t space = 2 + name.length();
  map<string,string>::const_iterator ci;
  if((ci = clo->aliases.find(name)) != clo->aliases.end()) {
    cerr << ", --" << ci->second;
    space += 4 + ci->second.length();
  }
  tabspace(space);
  paragraph(description);
}

CommandLineOptions::Global::Global(){}
CommandLineOptions::Global::~Global(){}
CommandLineOptions::Global::Global(const Global& rhs) : PrintOut()
{input=rhs.input; description=rhs.description;}
CommandLineOptions::Global& CommandLineOptions::Global::operator=(const Global& rhs)
{input=rhs.input; description=rhs.description;return *this;}
void CommandLineOptions::Global::print(const CommandLineOptions* const clo) const
{
  cerr << " <" << input << ">";
  tabspace(3 + input.length());
  paragraph(description);
}

CommandLineOptions::Example::Example(){}
CommandLineOptions::Example::~Example(){}
CommandLineOptions::Example::Example(const Example& rhs) : PrintOut()
{input=rhs.input; description=rhs.description;}
CommandLineOptions::Example& CommandLineOptions::Example::operator=(const Example& rhs)
{input=rhs.input; description=rhs.description;return *this;}
void CommandLineOptions::Example::print(const CommandLineOptions* const clo) const
{
  cerr << " " << input;
  tabspace(input.length()+1);
  paragraph(description);
}


