#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	vector<string> str1(N);
	vector<string> str2(M);

	for (int i = 0; i < N; i++) {
		cin >> str1[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> str2[i];
	}

	sort(str1.begin(), str1.end());

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		if (binary_search(str1.begin(), str1.end(), str2[i])) {
			cnt++;
		}
	}

	cout << cnt << '\n';
}