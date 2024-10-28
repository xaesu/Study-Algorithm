#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;

	double res = a - (a * b / 100);

	if (res >= 100) cout << "0";
	else cout << "1";
}
