#include <iostream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;

  int * arrN = new int [T];
  string * S = new string [T];

  // 입력
  for (int i = 0; i < T; i++)
    cin >> arrN[i] >> S[i];
  
  // 출력
  for (int i = 0; i < T; i++) {
    for (int j = 0; j < S[i].length(); j++) {
      for (int k = 0; k < arrN[i]; k++)
        cout << S[i][j];
    }
    cout << '\n';
  }
}