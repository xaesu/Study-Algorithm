#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	cin >> num;

	// 단어 입력
	vector<string> word(num);
	for (int i = 0; i < num; i++) {
		cin >> word[i];
	}

	// 그룹 단어인지 체크
	int cnt = 0;
	for (int i = 0; i < num; i++) {
		bool isGroup = true;
		vector<char> check;
		
		// 첫번째 문자 추가
		check.push_back(word[i][0]);

		int len = word[i].size();
		for (int j = 1; j < len; j++) {
			// 문자가 연속일 경우 pass
			if (word[i][j] == word[i][j-1]) continue;
			else {
				// check 배열에 현재 문자가 있는 지 확인
				if (find(check.begin(), check.end(), word[i][j]) != check.end()) {
					isGroup = false;
					break;
				}
				// 현재 문자 check 배열에 추가
				check.push_back(word[i][j]);
			}
		}
		if (isGroup) cnt++;
	}

	cout << cnt;
}