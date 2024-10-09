#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int x(0), y(0);
	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		if (x < y) cout << "NO BRAINS" << '\n';
		else cout << "MMM BRAINS" << '\n';
	}
}