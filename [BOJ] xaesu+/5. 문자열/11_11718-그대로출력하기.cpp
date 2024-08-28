#include <iostream>
#include <string>
using namespace std;

int main() {
  string str, printStr[100];
  int cnt = 0;

  // 입력
  for (int i = 0; i < 100; i++) {
    getline(cin, str);
    
    if (cin.eof())  // EOF 판별
      break;
    else
      printStr[cnt++] = str;
  }

  // 출력
  for (int i = 0; i < cnt; i++) {
    cout << printStr[i] << '\n';
  }
}