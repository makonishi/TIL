#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;           // aとbを入力する
  cout << (a & b) << endl; // a AND b の値を出力する
  cout << (a | b) << endl;
  cout << (a ^ b) << endl;
  return 0;
}
