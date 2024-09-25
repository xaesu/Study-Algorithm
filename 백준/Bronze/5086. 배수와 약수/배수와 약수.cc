#include <iostream>
using namespace std;

int main() {
	int N, M;

	while(1) {
		cin >> N >> M;
		if (N && M) {
			if (M % N == 0)
				cout << "factor" << '\n';
			else if (N % M == 0)
				cout << "multiple" << '\n';
			else
				cout << "neither" << '\n';
		}
		else break;
	}
}