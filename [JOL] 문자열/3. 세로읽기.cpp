#include <iostream>
using namespace std;

#include <string>
#include <cstring>

int main() {
    char str[6][16] = {};

    for (int i = 0; i < 5; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 6; j++) {
            if (str[j][i] == 0) continue;   // null 문자일 때 생략
            cout << str[j][i];
        }
    }
}