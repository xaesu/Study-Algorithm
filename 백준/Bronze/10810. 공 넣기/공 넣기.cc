#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int a, b, c;
	vector<int> basket(N+1, 0);		// 0번 배열 사용 X
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		for (int j = a; j <= b; j++) {
			basket[j] = c;
		}
	}

	// 출력 (1번 ~ N번 바구니)
	for (int i = 1; i <= N; i++) {
		cout << basket[i] << ' ';
	}
}