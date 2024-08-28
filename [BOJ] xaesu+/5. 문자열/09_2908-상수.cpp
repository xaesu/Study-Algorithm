#include <iostream>
#include <string>
using namespace std;

int main() {
  string num[2];
  cin >> num[0] >> num[1];

  // 일의 자리 <-> 백의 자리 교체
  for (int i = 0; i < 2; i++) {
    char temp = num[i][0];
    num[i][0] = num[i][2];
    num[i][2] = temp;
  }

  // 문자열 비교
  if (num[0] < num[1]) cout << num[1];
  else cout << num[0];
}