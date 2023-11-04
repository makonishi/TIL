#include <iostream>

using namespace std;

int N, A[109];
int Answer = 0;

int main() {
  cin >> N;

  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  for (int i = 1; i <= N; i++) {
    Answer += A[i];
  }

  cout << "Answer:" << Answer << endl;
  cout << Answer % 100 << endl;
  return 0;
}
