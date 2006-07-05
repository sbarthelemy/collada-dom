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

このツールはWindowsまたはLinux上でビルドして実行します。このツールはCOLLADA APIを使って
COLLADAデータを読み込みプリミティブの順番を変え、レンダリングハードウェアの頂点キャッシュを
活かせます。入力ファイルはすべてトライアングルであることが必要であり、すでに非インデックス化
されています。三角分割と非インデックス化ツールを最初にしてください。

今回が、このツールの最初のバージョンです。　最適化のアルゴリズムは比較的シンプルで、n乗の
ループを持つので、大きなファイルの処理には時間がかかる場合があります。1つのメッシュに50kの
トライアングルを含むファイルは、ペンティアムの3ghzでは約1分半かかります。
重要: デバッグバージョンは40倍遅くなりますから、必ず最適化されたビルドを使ってください。

このプログラムでは、頂点キャッシュを備えたすべてのハードウェアのパフォーマンスを改良できます。

このプログラムでは、コマンドライン上で頂点キャッシュのサイズが設定できます。

このプログラムは、プリミティブの順番を変更するだけで、出力ファイルのサイズは変更しません。

すべての最適化と統計では、頂点キャッシュはFIFOであることを前提としています。ほとんどのカードで
これが使用されているようですが、他のキャッシュタイプを追加される可能性があります。　

キャッシュには決まった数の頂点しか保持されないと仮定しています。実際にはキャッシュが保持可能な
頂点は、そのサイズによります。COLLADAではメッシュ中のすべてのプリミティブ・タグが違った
インプットの数を持つことが可能なので、ファイルには大小のサイズの頂点が混在することがあります。
この調整ツールの将来のバージョンではこのことを考慮に入れますが、今の時点では、ツールにいくつの
頂点がキャッシュに入るかを教えてやる必要があります。

この調整ツールは1.3または1.4のスキーマでビルドされ、実行します。

