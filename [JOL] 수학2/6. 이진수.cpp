#include <iostream>
using namespace std;

#include <string>

// 호너의 법칙
int Honer(string N) {
    int dec = 0;

    for (int i = 0; i < N.length(); i++) {
        dec *= 2;
        dec += N[i] - '0';     // '0'을 빼 문자 그대로의 정수 값을 더한다.
    }

    return dec;
}

int main() {
    // 길이를 파악하기 위해 string으로 선언
    string bit;
    cin >> bit;

    cout << Honer(bit) << endl;
}