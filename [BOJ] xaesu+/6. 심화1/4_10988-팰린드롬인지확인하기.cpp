#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string S);

int main() {
	string str;
	cin >> str;

	cout << isPalindrome(str);
}

// 팰린드롬인지 확인
bool isPalindrome (string S) {
	int len = S.length();

	for (int i = 0; i < len / 2; i++) {
		if (S[i] != S[len - 1 - i]) return 0;
	}

	return 1;
}