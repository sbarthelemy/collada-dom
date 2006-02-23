 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.
========================================================================
    CONSOLE APPLICATION : filename_conditioner Project Overview
========================================================================

このツールはWindowsまたはLinux上でビルドして動作させることができ、COLLADA APIを
利用して、<image>タグ中のURIを操作します。現在、多くのエクスポータは、これらの
URIを絶対パスでのファイルへの参照として出力しています。このツールを利用すると、
これらのURIを変更することができます。

このツールは、"file:"プロトコルでURIを含んだ"source="属性の記述されているCOLLADA
入力データ中の<image>タグをすべて見つけ出します。最初にURIからベース名（最後の/の
後ろにある文字列）だけを抜き出して、続いてユーザ定義したプレフィックスをベース名に
追加します。

このツールは、絶対位置でファイルを参照しているURIを、相対参照のURIに変換するのに
利用できます。

このツールは、主として、新しい調整ツールを記述する際の開始点として利用できる
非常に単純化したシェルとなるように意図されています。

・制限事項

これは単なるサンプルで、URIを詳しく処理しているわけではありません。
<image>タグに複雑なURIが含まれている場合、このツールがURIを壊してしまう
場合もあります。

入力と出力として同じファイル名を指定することも可能ですが、お勧めしません。
かならずオリジナルファイルのバックアップを作成するようにしてください。

ファイル全体をメモリに読み込んで、再度書き戻すためにCOLLADA APIを利用しているため、
出力ファイルのフォーマットが入力ファイルと一致しない場合がある点に注意してください。
APIによって、属性とパラメータのタグの順番が並べ替えられる場合もあります。

・拡張のヒント

この調整ツールを拡張するとしたら、イメージファイルが存在するかどうかのチェックや、
より優れたURIのハンドリング、指定したディレクトリへのイメージファイルのコピー、
さらに、指定したフォーマット／サイズへのイメージファイルの変換などが挙げられます。

