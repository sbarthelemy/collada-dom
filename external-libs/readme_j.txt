 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

このexternal-libsディレクトリツリーはここにあって、COLLADA_DOMの1つ以上のビルドターゲットが
依存するライブラリファイルが格納されています。

ここには現時点では、COLLADA DOMを使用するプロジェクトのための、win32版のlibxml2、zlib、
および iconvlibrariesライブラリのための空のディレクトリ構造が格納されています。これらの
ライブラリはCOLLADA DOMと一緒に配布されてはおらず、各自それぞれがダウンロードおよび
インストールする必要があります。詳細は、リリースノートを参照してください。

既存のwin32プロジェクトはすべて、libxml2、zlib、そして iconvがここで見つかることを
前提としています。別のバージョンとリンクするには、これらのプロジェクト設定を変更する
必要があります。

今後、ほかのビルドターゲット用のライブラリがさらに追加される可能性があります。
