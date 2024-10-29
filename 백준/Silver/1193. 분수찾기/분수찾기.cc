#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int a(0), b(0);		// 출력 변수

	// 대각선 행 체크(order)
	// x는 각 행에서의 순서가 됨
	int order(1);
	while (x > order) {
		x -= order++;
	}

	// 행이 짝수이면 오름차순 홀수이면 내림차순
	int is_even = (order % 2 == 0);
	if (is_even) {
		a = x;
		b = order - (x - 1);
	}
	else {
		a = order - (x - 1);
		b = x;
	}

	// 출력
	cout << a << '/' << b;
}
