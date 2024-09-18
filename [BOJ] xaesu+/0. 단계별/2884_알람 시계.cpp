#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;

	// 45분 미만일 때 시간에서 -1
	if (M < 45) {
		// 0시 일 때 24로 치환
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