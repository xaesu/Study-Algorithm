#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		// 공백찍기
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}

		// 별찍기
		for (int j = 0; j < 2*N-2*i-1; j++) {
			cout << '*';
		}
		cout << '\n';
	}
}