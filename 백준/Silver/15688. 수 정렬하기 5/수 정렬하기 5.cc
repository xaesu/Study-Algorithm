#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// 입력 속도 최적화
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	vector<int> num(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	// 정렬 후 출력
	sort(num.begin(), num.end());
	for (int i = 0; i < N; i++) {
		cout << num[i] << '\n';
	}
}