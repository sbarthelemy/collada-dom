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

���̃c�[����Windows�܂���Linux��Ńr���h���Ď��s���邱�Ƃ��ł��AGL���_�z��ŗ��p����
���߂̏����Ƃ��āACOLLADA API��p���ăW�I���g�����C���f�b�N�X�����܂��BCOLLADA�ł́A
�e���_�ɑ΂��āAPOSITION�ANORMAL�ATEXTURE�A�܂����̃\�[�X�ɁA�ʁX�̃C���f�b�N�X��
�������邱�Ƃ��\�ł��B���ꂼ��̃\�[�X�́A��������ߖ񂷂邽�߂ɈႤ�T�C�Y�ɂ���
���Ƃ��\�ł��BGL���_�z��ł́A���_�̂��ׂẴR���|�[�l���g�iPOSITION��NORMAL�Ȃǁj��
�z�񒆂Łu�����v�C���f�b�N�X�Ɉʒu���Ă��Ȃ���΂Ȃ�܂���B

���̃c�[���́ACOLLADA�f�[�^�̏��Ԃ���ёւ��ACOLLADA�f�[�^���������ɓǂݍ��񂾍ۂɁA
���ׂẴ\�[�X�ƃv���~�e�B�u�̃C���f�b�N�X��GL���_�z��ŗ��p����̂ɓK�������ԂƂȂ�
�悤�ɂ��܂��B������s�����߂ɁA�ꕔ�̃f�[�^���d��������K�v������܂��B���̃c�[���ł́A
�t�@�C�����傫���Ȃ��Ă��܂��̂𐧌����邽�߂ɁA��ΓI�ɕK�v�ȏꍇ�ɂ����f�[�^��
�d������悤�ɂȂ��Ă��܂��B

���Ƃ��΁A�f�[�^��POSITION�ANORMAL�ATEXTURE�̂��߂̓��͂������A�ŏ��̒��_��1 5 8�̏ꍇ�A
���̓f�[�^����POSITION 1�ANORMAL 5�ATEXTURE 8���A�o�̓f�[�^����POSITION�ANORMAL�A
TEXTURE 0�ɃR�s�[����܂��B�o�̓v���~�e�B�u�̒��ł́A���̒��_�̃C���f�b�N�X��0�ɕύX����A
���̃��j�[�N�Ȓ��_���C���f�b�N�X1�𗘗p����悤�ɂȂ�܂��B�C���f�b�N�X�̓����g�ݍ��킹��
�ēx���ꂽ�ꍇ�ɂ́A�Â��C���f�b�N�X���ė��p����܂��B�ʂ̌�����������ƁA
1 5 8�̃C���f�b�N�X�𗘗p���钸�_�́A�ǂ���o�̓f�[�^���̃C���f�b�N�X0���w���悤��
�ύX����܂��B

�{�v���O�����ł̓v���~�e�B�u�̏��Ԃ͕ύX���܂��񂪁A<geometry>�ƁA�֘A����<controller>�^�O
�̒��̂��ׂĂ̓��͂̏��ԂƔԍ���ύX���܂��B�ꕔ�̃t�@�C���͂قƂ�Ǔ����T�C�Y�̂܂܂�
�Ȃ�܂����A����ȊO�̃t�@�C���͂��Ȃ�傫���Ȃ�܂��B

XML�^�O���̖��O��ID�͕ύX����܂���B�o�̓t�@�C���́A���͂Ɠ������̃\�[�X�ƃv���~�e�B�u��
�����܂��B���̃c�[���̓v���~�e�B�u�̏��Ԃ�ύX���Ȃ����߁A���̓t�@�C�����ł̔C�ӂ�
���_�L���b�V���̍œK���́A�o�͂ɂ��ێ�����܂��B

�I���W�i���t�@�C���̃o�b�N�A�b�v����ɍ쐬����悤�����߂��܂��B

�E��������

����͒P�Ȃ�T���v���ł��B���G�ɂȂ肷���Ă��܂��̂�����邽�߂ɁACOLLADA�f�[�^��
���̓t�H�[�}�b�g�ɂ���������������܂��B�قƂ�Ǔ�������������������TinyColla��
�Ƃ��ɗ��p���邱�Ƃ��Ӑ}�����c�[���ł��B

�v���t�@�C���̔�C���f�b�N�X�������܂��s���Ȃ������ꍇ�ACOMMON�v���t�@�C��������
�T�|�[�g���܂��B
<triangles>�v���~�e�B�u�������T�|�[�g���Ă��܂��i�O�p���ʃc�[���ł̃v���v���Z�X�j�B
�����<mesh>�̒��ł́A�ǂ�<triangles>�����ׂē������͂������Ă��Ȃ���΂Ȃ�܂���B
<source>�́A1����<accessor>�������Ă��Ă����܂��܂���i�p�b�N�����ꂽ�z�񂾂��ŁA
�X�g���b�v�����ꂽ�z��ł͂���܂���j�B
1��<mesh>�̒���<vertices>�ɂ́A�\�[�X�ʒu�������P��̓��͂��܂܂�Ă��Ă����܂��܂���B

�t�@�C���S�̂��������ɓǂݍ���ŁA�ēx�����߂����߂�COLLADA API�𗘗p���Ă��邽�߁A
�o�̓t�@�C���̃t�H�[�}�b�g�����̓t�@�C���ƈ�v���Ȃ��ꍇ������_�ɒ��ӂ��Ă��������B
API�ɂ���āA�����ƃp�����[�^�̃^�O�̏��Ԃ����בւ�����ꍇ������܂��B

