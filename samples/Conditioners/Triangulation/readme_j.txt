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

このツールはWindowsまたはLinux上でビルドして実行でき、COLLADA APIを利用して、
COLLADAファイルを読み込み、すべての<polygons>を<triangles>に変換します。

出力の<triangles>は入力と同じ順番となります。それぞれのプリミティブには、
1つだけ三角形が含まれます。おそらく、出力ファイルのサイズが少し大きくなります。

・制限事項

穴の付いたポリゴンはサポートしていません。
非凸状のポリゴンはサポートしてしません。
減衰境界を持ったポリゴンが、領域のない三角形を出力してしまう場合があります。

・今後の改良点

もっと優れた三角測量アルゴリズムで上記の制限事項をなくす。
オプションで、ポリゴンを三角形ファンに変換できるようにする。
オプションで、領域を節約するために、1つ以上の三角形を持ったプリミティブを
作成できるようにする。

