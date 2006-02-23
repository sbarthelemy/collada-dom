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

このツールはWindowsまたはLinux上でビルドして実行することができ、GL頂点配列で利用する
ための準備として、COLLADA APIを用いてジオメトリを非インデックス化します。COLLADAでは、
各頂点に対して、POSITION、NORMAL、TEXTURE、また他のソースに、別々のインデックスを
持たせることが可能です。それぞれのソースは、メモリを節約するために違うサイズにする
ことも可能です。GL頂点配列では、頂点のすべてのコンポーネント（POSITIONやNORMALなど）が
配列中で「同じ」インデックスに位置していなければなりません。

このツールは、COLLADAデータの順番を並び替え、COLLADAデータをメモリに読み込んだ際に、
すべてのソースとプリミティブのインデックスがGL頂点配列で利用するのに適した順番となる
ようにします。これを行うために、一部のデータを重複させる必要があります。このツールでは、
ファイルが大きくなってしまうのを制限するために、絶対的に必要な場合にだけデータを
重複するようになっています。

たとえば、データがPOSITION、NORMAL、TEXTUREのための入力を持ち、最初の頂点が1 5 8の場合、
入力データ中のPOSITION 1、NORMAL 5、TEXTURE 8が、出力データ中のPOSITION、NORMAL、
TEXTURE 0にコピーされます。出力プリミティブの中では、この頂点のインデックスが0に変更され、
次のユニークな頂点がインデックス1を利用するようになります。インデックスの同じ組み合わせが
再度現れた場合には、古いインデックスが再利用されます。別の言い方をすると、
1 5 8のインデックスを利用する頂点は、どれも出力データ中のインデックス0を指すように
変更されます。

本プログラムではプリミティブの順番は変更しませんが、<geometry>と、関連する<controller>タグ
の中のすべての入力の順番と番号を変更します。一部のファイルはほとんど同じサイズのままと
なりますが、それ以外のファイルはかなり大きくなります。

XMLタグ中の名前とIDは変更されません。出力ファイルは、入力と同じ数のソースとプリミティブを
持ちます。このツールはプリミティブの順番を変更しないため、入力ファイル中での任意の
頂点キャッシュの最適化は、出力にも維持されます。

オリジナルファイルのバックアップを常に作成するようお勧めします。

・制限事項

これは単なるサンプルです。複雑になりすぎてしまうのを避けるために、COLLADAデータの
入力フォーマットにいくつか制限があります。ほとんど同じ制限事項を持ったTinyCollaと
ともに利用することを意図したツールです。

プロファイルの非インデックス化がうまく行かなかった場合、COMMONプロファイルだけを
サポートします。
<triangles>プリミティブだけをサポートしています（三角測量ツールでのプリプロセス）。
特定の<mesh>の中では、どの<triangles>もすべて同じ入力を持っていなければなりません。
<source>は、1つだけ<accessor>を持っていてもかまいません（パック化された配列だけで、
ストリップ化された配列ではありません）。
1つの<mesh>の中の<vertices>には、ソース位置を示す単一の入力が含まれていてもかまいません。

ファイル全体をメモリに読み込んで、再度書き戻すためにCOLLADA APIを利用しているため、
出力ファイルのフォーマットが入力ファイルと一致しない場合がある点に注意してください。
APIによって、属性とパラメータのタグの順番が並べ替えられる場合もあります。

