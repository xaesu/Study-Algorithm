#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string password;
	for (int i = 0; i < n; i++) {
		cin >> password;
		int len = (int)password.length();

		// 비밀번호 자릿수 체크
		if (6 <= len && len <= 9)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}