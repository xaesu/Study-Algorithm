#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<int> num(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	int find, cnt = 0;
	cin >> find;

	for (int i = 0; i < N; i++) {
		if (num[i] == find) cnt++;
	}

	cout << cnt << '\n';
}