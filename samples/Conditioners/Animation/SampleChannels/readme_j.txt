 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

========================================================================
    CONSOLE APPLICATION : sample_channels
========================================================================

���̃v���O�����́A�A�j���[�V�����`�����l�����܂�COLLADA�t�@�C�������[�h���āA�֐��Ȑ���
���Ԋu�ŃT���v�����܂��B

�������w�肵�Ȃ��Ńv���O���������s����ƁA�g�����ɂ��Ă̏�񂪕\������܂��B

�g�p�@: sample_channels -i <input_file> -o <output_file> -r <sampling_rate>

��F�T���v���`�����l����60Hz�̏ꍇ�i���ԒP�� = 1�b�Ɖ���j

 sample_channels -i anim.dae -o anim_sampled_at_60Hz.dae -r 0.166

���������F
�E���`�L�[�t���[����Ԃ������T�|�[�g���Ă��܂��B
�E�X�J���[�֐��Ȑ��������T�|�[�g���Ă��܂��iX,Y,Z�Ȃǂ̃`�����l��
�@�g�ݍ��킹�̓T�|�[�g���Ă��܂���j�B
�E�ڂ����G���[�`�F�b�N�i�z���A�N�Z�b�T�̃J�E���g�̐������Ȃǁj�͍s���܂���B

=======
COLLADA API���g���ăt�@�C���S�̂��������ɓǂݍ��݁A�ēx�o�͂��邽�߁A�o�̓t�@�C���̃t�H�[�}�b�g��
���̓t�@�C���ƈ�v���Ȃ��ꍇ������_�ɒ��ӂ��Ă��������B�܂�API�ɂ���āA�^�O�̑����ƃp�����[�^��
���Ԃ����בւ�����ꍇ������܂��B

