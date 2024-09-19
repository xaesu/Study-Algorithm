#include <iostream>
#include <string>
using namespace std;

int findCharacterIndex(string str, char ch);

int main() {
    string S;
    cin >> S;

    for (int i = 0; i < 26; i++) {
        char C = 'a' + i;

        cout << findCharacterIndex(S, C) << ' ';
    }
}

int findCharacterIndex(string str, char ch) {
    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (str[i] == ch) return i;
    }

    return -1;
}