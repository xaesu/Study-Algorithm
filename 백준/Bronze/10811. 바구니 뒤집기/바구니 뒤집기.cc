#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int* basket = new int[N + 1];					// 0번 인덱스 사용X
	for (int i = 1; i <= N; i++) {
		basket[i] = i;
	}

	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		if (a != b) {
			reverse(basket + a, basket + b + 1);	// 역순 정렬
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << basket[i] << ' ';
	}
}