 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

*********************
* COLLADA DOM 
* COLLADA スキーマ・バージョン：1.4、および1.3.1
*********************

プログラム構造：

root:
  visual studio 2003 のソリューション、makefile、readme.txt、relnotes_e.txt、およびライセンス・ファイル。

/build:
  makefile定義

/doc : 
  ドキュメント

/include:
  インクルード・ディレクトリ。トップ・レベルの参照ヘッダ dae.h を含む

   /dae:
     COLLADA オブジェクトモデル・ヘッダ、およびベース・インタフェース
     ヘッダ・ファイルの全てを含む。

   /1.3:
   /dom:
     	  v1.3 用に生成された COLLADA C++ DOM オブジェクト・ヘッダファイルの全てを含む

   /1.4:
	/dom:
	  v1.4 用に生成された COLLADA C++ DOM オブジェクト・ヘッダファイルの全てを含む

/modules:
     COLLADA プラグインの参照実装としての daeDatabase、およびバックエンド入出力プラグインの実装ヘッダファイルを含む

/samples: 
   
   /integration:
     統合用ライブラリの例として、COLLADA ビューア・サンプルで使われている  intGeometry クラスを実装したものを含む
   
   /conditioners/Animation:
     アニメーション関数曲線を一定間隔てサンプリングするコンディショナーの例を含む

   /conditioners/Common:
     全サンプル条件で使われる共通コード

   /conditioners/DeIndexer:
     COLLADA メッシュデータのインデックスを解除するサンプル条件を含む。

   /conditioners/FileName:
     画像ファイル名をすべて相対パスに変換するサンプル条件を含む。

   /conditioners/Optimizer:
     COLLADA メッシュデータを最適化するサンプル条件を含む。

   /conditioners/Triangulation:
     COLLADA メッシュデータを三角形に分割するサンプル条件を含む。

/src:

   /dae:
     COLLADA C++ API オブジェクトモデル、および抽象インタフェースクラスを実装したC++ソースコードの全てを含む。

   /1.3:
	/dom:
	  COLLADA C++ オブジェクト定義用に「生成された」C++ ソースコードの全てを含む。
	  このコードは、COLLADA v1.3 XML Schema から直接生成されたものです。

   /1.4:
   /dom:
     COLLADA C++ オブジェクト定義用に「生成された」C++ ソースコードの全てを含む。
     このコードは、COLLADA v1.4 XML Schema から直接生成されたものです。

   /modules:
     COLLADA の抽象的な API 概念の参照実装を含む。

      /LIBXMLPlugin:
        LIBXML2 ライブラリを利用した XML 入出力バックエンドの例

      /STLDatabase:
        daeDatabse から導出された COLLADA ランタイム・データベースの例

      /XMLPlugin:
        スタンドアロンの XML パーサーを利用した XML DB バックエンドの例


*********************
注意：

- データの検索は、実行可能ファイルとの相対位置で行われます。

