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

このツールはWindowsまたはLinux上でビルドして実行します。このツールは、COLLADA APIを使って、<image>タグ中のURIを操作します。現在、多くのエクスポータは、これらのURIを絶対パスを持ったファイルへの参照として出力しています。このツールを利用して、それらのURIを変更することができます。

このツールは、COLLADA入力データ内で、"file:"プロトコルを持ったURIを使うすべての<image>タグ、また<include>タグを見つけ出します。最初にURIからベース名（最後の/の後にある文字列）だけを抜き出して、続いてユーザ定義したプレフィックスがこのベース名に追加されます。

このツールは、絶対位置でファイルを参照しているURIを、相対参照のURIに変換するのに利用できます。

このツールは、主に、新しい調整ツールを記述する際の開始点として利用するための非常に単純化したシェルになるよう意図されています。

・制限事項

これは単なるサンプルで、URIを徹底的に詳しく処理するものではありません。
<image>タグ、また<include>タグに複雑なURIが含まれている場合、このツールがURIを壊してしまう場合があります。

入力と出力として同じファイル名を指定することも可能ですが、お勧めできません。
必ずオリジナルファイルのバックアップを作成するようにしてください。

COLLADA DOMを使ってファイル全体をメモリに読み込み、再度出力するため、出力ファイルのフォーマットが入力ファイルと一致しない場合がある点に注意してください。DOMによって、属性とパラメータのタグの順番が並べ替えられる場合があります。

・拡張のヒント

この調整ツールの拡張の可能性としては、イメージファイルが存在するかどうかのチェック、より優れたURIのハンドリング、指定したディレクトリへのイメージファイルのコピー、さらに、イメージファイルの特定のフォーマット／サイズへの変換などが挙げられます。

