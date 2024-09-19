#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;

	if (M < 45) {
		if (H <= 0) H = 24;
		H--;
		int mm = 45 - M;
		M = 60 - mm;
	}
	else {
		M -= 45;
	}

	cout << H << ' ' << M;
}