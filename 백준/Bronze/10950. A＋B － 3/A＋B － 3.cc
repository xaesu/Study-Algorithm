#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, a, b;
	cin >> N;

	vector<int> sum(N);
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum[i] = a + b;
	}

	for (int i = 0; i < N; i++) {
		cout << sum[i] << '\n';
	}
}