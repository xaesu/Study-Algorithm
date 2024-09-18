#include <iostream>
using namespace std;

int match(int a, int b, int c);
int prize(int n, int dice);

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	cout << match(a, b, c);
}

// 주사위 수 매칭 체크
int match(int a, int b, int c) {
	if (a == b) {
		if (b == c) return prize(3, a);
		else return prize(2, a);
	}
	else if (a == c) return prize(2, a);
	else if (b == c) return prize(2, b);
	else {
		int max = 0;
		if (a > b) {
			if (a > c) max = a;
			else max = c;
		}
		else {
			if (b > c) max = b;
			else max = c;
		}
		return prize(1, max);
	}
}

// 상금 계산
int prize(int n, int dice) {
	switch(n) {
	case 1:
		return dice * 100;
	case 2:
		return 1000 + dice * 100;
	case 3:
		return 10000 + dice * 1000;
	}
}