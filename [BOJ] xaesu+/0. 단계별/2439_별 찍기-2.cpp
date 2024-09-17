#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		// 공백
		for (int j = N - 1; j > i; j--)
			cout << ' ';

		// 별 *
		for (int j = 0; j <= i; j++)
			cout << '*';

		cout << '\n';
	}
}