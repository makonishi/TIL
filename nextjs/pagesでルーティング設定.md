# pagesでルーティング設定
#nextjs 

- pagesディレクトリに作成したディレクトリに対して、jsファイルを作成すると、ルーティングも適用される。仕組みはわからん。。。
```javascript
// pages/posts/firstPost.js

export default function firstPost() {
  return (
    <div>
      <h1>最初の投稿</h1>
    </div>
  );
}

```
↓
[![Image from Gyazo](https://i.gyazo.com/3f7435198f9a9749a9639de613514138.png)](https://gyazo.com/3f7435198f9a9749a9639de613514138)