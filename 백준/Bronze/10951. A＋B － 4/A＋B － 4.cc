#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);	// 입력 버퍼 비워주기 + 입력 받기
	ios_base::sync_with_stdio(false);	// 독립 버퍼 사용 (Cpp or C 단독 사용 필수)

	int a, b;

	// 입력

	while (true) {
		cin >> a >> b;

		if (cin.eof())  // EOF 판별
			break;
		else
			cout << a + b << "\n";
	}
}