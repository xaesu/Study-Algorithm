#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	if (N == 0 || K == 0) {
		cout << "0";
		return 0;
	}

	vector <int> divisor;		// K번째까지의 약수를 담음
	int cnt(0);
	for (int i = 1; i <= sqrt(N); i++) {
		if (N % i == 0) {
			divisor.push_back(i);
			if (i != N / i)
				divisor.push_back(N / i);
		}
	}

	sort(divisor.begin(), divisor.end());

	// 출력
	if (K <= divisor.size())
		cout << divisor[K - 1];
	else
		cout << "0"; // K번째 약수가 존재하지 않음
}