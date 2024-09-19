#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	// 출력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << '\n';
	}
}