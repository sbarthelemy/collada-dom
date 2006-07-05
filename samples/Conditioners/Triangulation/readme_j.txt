 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : triangulation_conditioner Project Overview
========================================================================

このツールはWindowsまたはLinux上でビルドして実行します。このツールは、COLLADA APIを使って、
COLLADAファイルを読み込み、すべての<polygons>を<triangles>に変換します。

このツールは1.3または1.4のスキーマでビルドされ、実行します。

・制限事項

穴の付いたポリゴンはサポートしていません。
非凸状のポリゴンはサポートしてしません。
減衰境界を持ったポリゴンが、領域のないトライアングルを出力してしまう場合があります。

・今後の改良点

上記の制限事項を改善してもっと優れた三角分割アルゴリズムをめざす。
オプションで、ポリゴンを三角形ファンに変換できるようにする。
オプションで、1つ以上の三角形を持ったプリミティブを作成できるようにして領域を節約する。

