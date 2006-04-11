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

このツールはWindowsまたはLinux上でビルドして実行します。このツールは、GL頂点配列で利用するための準備として、COLLADA APIを使ってジオメトリを非インデックス化します。COLLADAでは、各頂点に対して、POSITION、NORMAL、TEXTURE、また他のソースに、別々のインデックスを持たせることが可能です。それぞれのソースは、違うサイズにして、メモリを節約することができます。。GL頂点配列では、頂点のすべてのコンポーネント（POSITIONやNORMALなど）が配列中で同一のインデックスになければなりません。

このツールは、COLLADAデータの順番を並び替え、COLLADAデータをメモリに読み込んだ時点で、すべてのソースとプリミティブのインデックスが既にGL頂点配列で利用するのに正しい順番となっているようにします。そのためには一部のデータを重複させる必要があります。このツールでは、ファイルが大きくなってしまうのを避けるため、絶対的に必要な場合にだけデータを重複させるようになっています。

たとえば、データがPOSITION、NORMAL、TEXTUREのための入力を持ち、最初の頂点が1 5 8の場合、入力データ中のPOSITION 1、NORMAL 5、TEXTURE 8が、出力データ中のPOSITION、NORMAL、TEXTURE  0にコピーされます。出力プリミティブの中では、この頂点のインデックスが0に変わり、次のユニークな頂点はインデックス1,…を利用するようになります。インデックスの同一の組み合わせが再度現れた場合、古いインデックスが再度使用されます。つまり、1 5 8のインデックスを利用するすべての頂点は、どれも出力データ中でインデックス0を指すよう変化させられます。

本プログラムではプリミティブの順番は変更しませんが、<geometry>と、関連する<controller>タグの中のすべての入力の順番と番号を変えます。ほとんど同じサイズのままのファイルもありますが、かなり大きくなるものもあります。

XMLタグ中の名前とIDは変更されません。出力ファイルは、入力と同じ数のソースとプリミティブを持ちます。このツールはプリミティブの順番を変更しないため、入力ファイル中にある任意の頂点キャッシュの最適化は、そのまま出力に保持されます。

オリジナルファイルのバックアップを常に作成するようお勧めします。

この調整ツールは現在、1.3スキーマでのみ有効です。この非インデックス化のこのバージョンが出た時点で、1.4スキーマと、関連したスキニングの標準はまだ未批准の状態でした。

・制限事項

これは単なるサンプルです。複雑になりすぎるのを避けるために、COLLADAデータの入力フォーマットにはたくさんのに制限が加えられています。このツールはほぼ同じ制限事項を持ったTinyCollaとともに利用することを意図されています。

他のプロファイルの非インデックス化が失敗した場合、COMMONプロファイルだけがサポートされます。
<triangles>プリミティブだけがサポートされています（三角測量ツールでのプリプロセス）。特定の<mesh>の中に、すべての<triangles>が同一の入力を持つことが必要です。<source>は、１つの<accessor>しかを持てません。（パック化された配列だけで、ストリップ化された配列ではない）。
1つの<mesh>の中の<vertices>に、ソース位置を示す入力は一つしか含まれていてはなりません。

COLLADA APIを使ってファイル全体をメモリに読み込み、再度出力するため、出力ファイルのフォーマットが入力ファイルと一致しない場合がある点に注意してください。またAPIによって、タグの属性とパラメータのの順番が並べ替えられる場合があります。

