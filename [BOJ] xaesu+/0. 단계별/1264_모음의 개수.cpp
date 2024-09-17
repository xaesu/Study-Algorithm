#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string input, str;
	int cnt = 0;

	// getline 함수로 한줄씩 입력 받고 #이 입력되면 입력 종료
	while (1) {
		getline(cin, input);
		if (input == "#") break;
		str += input;
		str += '\n';
	}

	// 소문자로 변환
	int len = str.length();
	for (int i = 0; i < len; i++) {
		str[i] = tolower(str[i]);
	}

	// 모음 갯수 체크
	for (int i = 0; i < len; i++) {
		if (str[i] == '\n') {
			cout << cnt << '\n';
			cnt = 0;
			continue;
		}
		if (str[i] == 'a' || str[i] == 'e' ||
			str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			cnt++;
		}
	}
}