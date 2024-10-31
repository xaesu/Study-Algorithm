#include <iostream>
using namespace std;

int main()
{
	int _case;
	cin >> _case;

	int money(0),Q(0), D(0), N(0), P(0);
	for (int i = 0; i < _case; i++) { 
		cin >> money;

		Q = money / 25;
		money -= 25 * Q;
		D = money / 10;
		money -= 10 * D;
		N = money / 5;
		money -= 5 * N;
		P = money / 1;
		money -= 1 * P;

		if (money == 0) {
			cout << Q << ' ' << D << ' ' << N << ' ' << P << '\n';
		}
	}
}