 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

スキーマから生成された統合用ライブラリのテンプレートを2種類提供しています。

integrationFull： 全 COLLADA オブジェクトを含む
integrationSimple： xmlの「インライン」オブジェクトは含まない。

統合用ライブラリを使うために、すべてのクラスを実装する必要はありません。
必要とするオブジェクトを COLLADA から選んで、そのクラスだけを実装すれば十分です。
そして、統合用ライブラリの中に実装したクラスの一覧に一致するように、
メインヘッダ integrationFull.h やintegrationSimple.h を修正する（名前を変更する）
必要があります。メイクファイルや Visual Studio のプロジェクトについても同様です。


詳しくは、「integration」というサンプルを参照してください。このサンプルは、
intGeometry オブジェクトを実装するだけの、きわめて単純な統合用ライブラリです。 


