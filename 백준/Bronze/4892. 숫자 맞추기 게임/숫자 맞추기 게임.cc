#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num(0), iseven(0);
	for (int i = 1; ; i++) {
		cin >> num;
		if (!num) return 0;

		// 케이스 출력
		cout << i << ". ";

		// 계산
		num *= 3;

		// 홀짝 판별
		if (num % 2) {
			iseven = 0;
			cout << "odd ";
		}
		else {
			iseven = 1;
			cout << "even ";
		}

		if (iseven) num /= 2;
		else ++num /= 2;

		num *= 3;
		num /= 9;

		cout << num << '\n';
	}
}
