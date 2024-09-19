#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int X, N;
	cin >> X >> N;

	int price, n;
	for (int i = 0; i < N; i++) {
		cin >> price >> n;
		X -= price * n;
	}

	if (X == 0) cout << "Yes";
	else cout << "No";
}