#include <iostream>
using namespace std;

int main() {
	int N, c[3];
	cin >> N;

	int result(0);
	for (int i = 0; i < 3; i++) {
		cin >> c[i];

		if (N >= c[i]) result += c[i];
		else if (N < c[i]) result += N;
	}

	cout << result;
}
