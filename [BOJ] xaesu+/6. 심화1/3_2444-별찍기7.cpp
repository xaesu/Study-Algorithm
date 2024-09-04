#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

	// 피라미드
    for (int i = 0; i < N; i++) {
		// 공백
		for (int j = N - 1; j > i; j--)
			cout << ' ';

		// 별 *
		for (int j = 0; j < 2*i+1; j++)
			cout << '*';

		cout << '\n';
    }

	// 역피라미드
	for (int i = 0; i < N-1; i++) {
		// 공백
		for (int j = 0; j <= i; j++)
			cout << ' ';

		// 별 *
		for (int j = 0; j < 2*(N-i-1)-1; j++)
			cout << '*';

		cout << '\n';
	}
}