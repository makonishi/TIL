#nextjs 

SSG:
ビルドした時にhtmlのみ。すでに生成されているのでリクエストにすぐに返せる。
ブログとかECの商品ページとかの静的なファイル。更新する必要がないから。

SSR:
サーバーがhtmlのページを生成。リクエスト元に返す。リクエストを投げられるたびにサーバーサイドでレンダリング。nextjsだけでなくrailsも同様。
twitterのタイムラインとかuserのprofileとか。ユーザーにとって頻繁に更新されるから。

違い:
SSGはビルドしたら情報の更新はできない。その代わりレスポンスが早い

nextjsでは、ページ単位でSSGかSSRのどちらかを選べる。