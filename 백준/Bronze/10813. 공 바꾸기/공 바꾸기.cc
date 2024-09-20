#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int a, b;
	vector<int> basket(N+1, 0);		// 0번 배열 사용 X

	// 바구니에 바구니와 같은 번호의 공 세팅
	for (int i = 1; i <= N; i++) {
		basket[i] = i;
	}

	// 공 바꾸기
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		if (a != b) {
			int temp = basket[a];
			basket[a] = basket[b];
			basket[b] = temp;
		}
	}

	// 출력
	for (int i = 1; i <= N; i++) {
		cout << basket[i] << ' ';
	}
}