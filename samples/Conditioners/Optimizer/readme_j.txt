 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : optimizer
========================================================================

このプログラムはまだ完成していません。

このツールはWindowsまたはLinux上でビルドして実行することができ、COLLADA APIを
利用して、COLLADAデータを読み込んで、レンダリングハードウェアの頂点キャッシュを
活かせるように、プリミティブの順番を並べ替えます。

このプログラムでは、頂点キャッシュを備えたすべてのハードウェアのパフォーマンスを
調整できます。

このプログラムでは、頂点キャッシュのサイズが設定できます。

このプログラムは、プリミティブの順番を変更するだけで、出力ファイルのサイズは
変更しません。正しいアルゴリズムを利用すれば、メッシュを非インデックス化する
ことができ、また最適化も維持できます。

