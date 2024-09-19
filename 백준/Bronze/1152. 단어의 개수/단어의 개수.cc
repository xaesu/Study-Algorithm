#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int len = str.length();
    int cnt = 0;

    // 입력값이 있을 때 공백 개수 파악
    if (len) {
        for (int i = 0; i < len; i++) {
            if (str[i] == ' ') cnt++;
        }
        
        if (str[0] == ' ') cnt--;
        if (str[len-1] == ' ') cnt--;

        cout << cnt+1;
    }
}