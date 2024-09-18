#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	B += C;
	while (true) {
		if (B >= 60) {
			A += 1;
			B -= 60;
		}
		else break;
	}

	if (A >= 24) A -= 24;

	cout << A << ' ' << B;
}