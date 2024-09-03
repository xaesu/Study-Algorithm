#include <iostream>
#include <cstring>
using namespace std;

int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);

int cnt = 0;	// 재귀 횟수 카운트

int main()
{
	int T;
	cin >> T;

	// 입력
	string * S = new string [T];
	for (int i = 0; i < T; i++) {
		cin >> S[i];
	}

	// 출력
	for (int i = 0; i < T; i++) {
		cnt = 0;
		cout << isPalindrome(S[i].c_str()) << ' ' << cnt << '\n';
	}

	delete[] S;
}

// 팰린드롬 체크
int recursion(const char* s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}