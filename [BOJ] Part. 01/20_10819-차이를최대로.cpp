#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int funcSum(vector<int>& arr);
int factorial(int n);

int main() {
	int N;
	cin >> N;

	// 배열 입력
	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// 정렬
	sort(arr.begin(), arr.end());

	int maxSum = 0;

	// n개의 원소로 만들 수 있는 순열의 갯수는 n!
	int permCount = factorial(N);

	for (int i = 0; i < permCount; ++i) {
		int currentSum = funcSum(arr);

		// 최댓값 갱신
		maxSum = max(maxSum, currentSum);

		// 다음 순열 정렬
		next_permutation(arr.begin(), arr.end());
	}

	cout << maxSum;
}

// 현재 순열에서의 공식 합계
int funcSum(vector<int>& arr) {
	int sum = 0;
	for (int i = 0; i < arr.size() - 1; ++i) {
		sum += abs(arr[i] - arr[i + 1]);
	}
	return sum;
}

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n * factorial(n - 1);
}