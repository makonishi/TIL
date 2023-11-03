/* 標準入出力を扱うためのライブラリ <iostream>
 * をインクルードしています。このライブラリを使用することで、std::cin（標準入力）とstd::cout（標準出力）を使うことができる。*/
#include <iostream>

/* C++プログラムのエントリーポイントはmain関数です。プログラムの実行がmain関数から始まる.
 */
int main() {
  /* 整数型（int）の変数a、b、cを宣言 */
  int a, b, c;

  std::cout << "aを入力してください（1以上100以下の整数）: ";
  std::cin >> a;
  std::cout << "bを入力してください（1以上100以下の整数）: ";
  std::cin >> b;
  std::cout << "cを入力してください（1以上100以下の整数）: ";
  std::cin >> c;

  // a * b * cの計算と出力
  int result = a * b * c;
  std::cout << "a * b * c の値は " << result << " です。" << std::endl;

  return 0;
}
