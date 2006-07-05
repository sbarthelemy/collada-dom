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

このプログラムは、アニメーションチャンネルを含んだCOLLADAファイルをロードして、関数曲線を
一定間隔でサンプルします。

引数を指定しないでプログラムを実行すると、使い方についての情報が表示されます。

使用法: sample_channels -i <input_file> -o <output_file> -r <sampling_rate>

例：サンプルチャンネルが60Hzの場合（時間単位 = 1秒と仮定）

 sample_channels -i anim.dae -o anim_sampled_at_60Hz.dae -r 0.166

制限事項：
・線形キーフレーム補間だけをサポートしています。
・スカラー関数曲線だけをサポートしています（X,Y,Zなどのチャンネル
　組み合わせはサポートしていません）。
・詳しいエラーチェック（配列やアクセッサのカウントの整合性など）は行いません。

=======
COLLADA APIを使ってファイル全体をメモリに読み込み、再度出力するため、出力ファイルのフォーマットが
入力ファイルと一致しない場合がある点に注意してください。またAPIによって、タグの属性とパラメータの
順番が並べ替えられる場合があります。

