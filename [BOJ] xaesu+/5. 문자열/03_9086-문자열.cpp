#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    string * word = new string [T];

    // 입력
    for (int i = 0; i < T; i++) {
        cin >> word[i];
    }

    // 출력
    for (int i = 0; i < T; i++) {
        int len = word[i].length();
        cout << word[i][0] << word[i][len-1] << '\n';
    }
}