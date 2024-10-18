#include <iostream>
#include <vector>
using namespace std;

int main() {
	int testcase(0);
	cin >> testcase;

	int target(0), a(0), b(0);
	// TestCase
	for (int i = 0; i < testcase; i++) {
		cin >> target;
		cout << "Pairs for " << target << ": ";
		// a
		for (int j = 1; j < target - 1; j++) {
			// b
			for (int k = 2; k < target; k++) {
				if (j >= k) continue;
				if (j + k == target) {
					if (a != 0 || b != 0) cout << ", ";
					a = j;
					b = k;
					cout << a << ' ' << b;
				}
			}
		}
		cout << '\n';
		a = 0; b = 0;
	}
}
