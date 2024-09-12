#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string word;
	cin >> word;

	string patterns[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	int cnt = 0, len = word.size();
	for (int i = 0; i < word.length(); i++) {
        bool findPattern = false;

        // patterns 요소 체크
        for (string pattern : patterns) {
            // 현재 위치에서 지정 패턴과 일치 여부 확인
            if (word.substr(i, pattern.length()) == pattern) {
                cnt++;

                // 패턴 길이만큼 인덱스 넘기기
                i += pattern.length() - 1;
                findPattern = true;
                break;
            }
        }

        // 패턴이 없으면 일반 문자로 처리
        if (!findPattern) {
            cnt++;
        }
	}

    cout << cnt;
}