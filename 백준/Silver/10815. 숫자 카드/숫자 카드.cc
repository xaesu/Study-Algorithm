#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int S;
	cin >> S;
	vector <int> sang(S, 0);

	for (int i = 0; i < S; i++) {
		cin >> sang[i];
	}

	sort(sang.begin(), sang.end());

	int N;
	cin >> N;
	vector <int> number(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> number[i];
	}

	for (int i = 0; i < N; i++) {
		if (binary_search(sang.begin(), sang.end(), number[i])) {
			cout << 1 << ' ';
		}
		else cout << 0 << ' ';
	}
}