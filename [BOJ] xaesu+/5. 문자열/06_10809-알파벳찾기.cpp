#include <iostream>
#include <string>
using namespace std;

int findCharacterIndex(string str, char ch);

int main() {
    string S;
    cin >> S;

    // a ~ z까지 문자 조회
    for (int i = 0; i < 26; i++) {
        char C = 'a' + i;

        cout << findCharacterIndex(S, C) << ' ';
    }
}

// 문자열에서 문자 위치 찾기
int findCharacterIndex(string str, char ch) {
    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (str[i] == ch) return i;
    }

    return -1;
}