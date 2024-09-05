#include <iostream>
#include <cstring>

using namespace std;

int main() {
	string str;
	cin >> str;

	int len = str.size();

	// 대문자로 변환
	for (int i = 0; i < len; i++) {
		str[i] = std::toupper(str[i]);
	}

	// 갯수 체크 배열 생성
	int check[26] = {};

	// 알파벳 체크
	for (int i = 0; i < len; i++) {
		check[str[i] - 'A']++;
	}

	//// 알파벳 갯수 테스트
	//char C;

	//for (int i = 0; i < 26; i++) {
	//	C = i + 'A';
	//	cout << C << ';' << check[i] << '\n';
	//}

	// 갯수 비교
	int maxCnt = 0;
	char maxChar;

	for (int i = 0; i < 26; i++) {
		// 갯수가 0이 아닐 때만 비교
		if (check[i]) {

			if (check[i] > maxCnt) {
				maxCnt = check[i];
				maxChar = 'A' + i;
			}
			else if (check[i] == maxCnt)
				maxChar = '?';
		}
	}

	cout << maxChar;
}