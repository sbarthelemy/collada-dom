 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : DeIndexer
========================================================================

���̃c�[����Windows�܂���Linux��Ńr���h���Ď��s���܂��B���̃c�[���́AGL���_�z��ŗ��p���邽�߂̏����Ƃ��āACOLLADA API���g���ăW�I���g�����C���f�b�N�X�����܂��BCOLLADA�ł́A�e���_�ɑ΂��āAPOSITION�ANORMAL�ATEXTURE�A�܂����̃\�[�X�ɁA�ʁX�̃C���f�b�N�X���������邱�Ƃ��\�ł��B���ꂼ��̃\�[�X�́A�Ⴄ�T�C�Y�ɂ��āA��������ߖ񂷂邱�Ƃ��ł��܂��B�BGL���_�z��ł́A���_�̂��ׂẴR���|�[�l���g�iPOSITION��NORMAL�Ȃǁj���z�񒆂œ���̃C���f�b�N�X�ɂȂ���΂Ȃ�܂���B

���̃c�[���́ACOLLADA�f�[�^�̏��Ԃ���ёւ��ACOLLADA�f�[�^���������ɓǂݍ��񂾎��_�ŁA���ׂẴ\�[�X�ƃv���~�e�B�u�̃C���f�b�N�X������GL���_�z��ŗ��p����̂ɐ��������ԂƂȂ��Ă���悤�ɂ��܂��B���̂��߂ɂ͈ꕔ�̃f�[�^���d��������K�v������܂��B���̃c�[���ł́A�t�@�C�����傫���Ȃ��Ă��܂��̂�����邽�߁A��ΓI�ɕK�v�ȏꍇ�ɂ����f�[�^���d��������悤�ɂȂ��Ă��܂��B

���Ƃ��΁A�f�[�^��POSITION�ANORMAL�ATEXTURE�̂��߂̓��͂������A�ŏ��̒��_��1 5 8�̏ꍇ�A���̓f�[�^����POSITION 1�ANORMAL 5�ATEXTURE 8���A�o�̓f�[�^����POSITION�ANORMAL�ATEXTURE  0�ɃR�s�[����܂��B�o�̓v���~�e�B�u�̒��ł́A���̒��_�̃C���f�b�N�X��0�ɕς��A���̃��j�[�N�Ȓ��_�̓C���f�b�N�X1,�c�𗘗p����悤�ɂȂ�܂��B�C���f�b�N�X�̓���̑g�ݍ��킹���ēx���ꂽ�ꍇ�A�Â��C���f�b�N�X���ēx�g�p����܂��B�܂�A1 5 8�̃C���f�b�N�X�𗘗p���邷�ׂĂ̒��_�́A�ǂ���o�̓f�[�^���ŃC���f�b�N�X0���w���悤�ω��������܂��B

�{�v���O�����ł̓v���~�e�B�u�̏��Ԃ͕ύX���܂��񂪁A<geometry>�ƁA�֘A����<controller>�^�O�̒��̂��ׂĂ̓��͂̏��ԂƔԍ���ς��܂��B�قƂ�Ǔ����T�C�Y�̂܂܂̃t�@�C��������܂����A���Ȃ�傫���Ȃ���̂�����܂��B

XML�^�O���̖��O��ID�͕ύX����܂���B�o�̓t�@�C���́A���͂Ɠ������̃\�[�X�ƃv���~�e�B�u�������܂��B���̃c�[���̓v���~�e�B�u�̏��Ԃ�ύX���Ȃ����߁A���̓t�@�C�����ɂ���C�ӂ̒��_�L���b�V���̍œK���́A���̂܂܏o�͂ɕێ�����܂��B

�I���W�i���t�@�C���̃o�b�N�A�b�v����ɍ쐬����悤�����߂��܂��B

���̒����c�[���͌��݁A1.3�X�L�[�}�ł̂ݗL���ł��B���̔�C���f�b�N�X���̂��̃o�[�W�������o�����_�ŁA1.4�X�L�[�}�ƁA�֘A�����X�L�j���O�̕W���͂܂�����y�̏�Ԃł����B

�E��������

����͒P�Ȃ�T���v���ł��B���G�ɂȂ肷����̂�����邽�߂ɁACOLLADA�f�[�^�̓��̓t�H�[�}�b�g�ɂ͂�������̂ɐ������������Ă��܂��B���̃c�[���͂قړ�������������������TinyColla�ƂƂ��ɗ��p���邱�Ƃ��Ӑ}����Ă��܂��B

���̃v���t�@�C���̔�C���f�b�N�X�������s�����ꍇ�ACOMMON�v���t�@�C���������T�|�[�g����܂��B
<triangles>�v���~�e�B�u�������T�|�[�g����Ă��܂��i�O�p���ʃc�[���ł̃v���v���Z�X�j�B�����<mesh>�̒��ɁA���ׂĂ�<triangles>������̓��͂������Ƃ��K�v�ł��B<source>�́A�P��<accessor>���������Ă܂���B�i�p�b�N�����ꂽ�z�񂾂��ŁA�X�g���b�v�����ꂽ�z��ł͂Ȃ��j�B
1��<mesh>�̒���<vertices>�ɁA�\�[�X�ʒu���������͈͂�����܂܂�Ă��Ă͂Ȃ�܂���B

COLLADA API���g���ăt�@�C���S�̂��������ɓǂݍ��݁A�ēx�o�͂��邽�߁A�o�̓t�@�C���̃t�H�[�}�b�g�����̓t�@�C���ƈ�v���Ȃ��ꍇ������_�ɒ��ӂ��Ă��������B�܂�API�ɂ���āA�^�O�̑����ƃp�����[�^�̂̏��Ԃ����בւ�����ꍇ������܂��B

