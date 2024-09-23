#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int paper[101][101] = {0};

	// 배열 생성 및 입력
	int a, b;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		// 검은 영역 체크
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
			if (paper[b + j][a + k] == 0)
				paper[b + j][a + k] = 1;
			}

		}
	}

	// 검은 영역 넓이 체크
	int cnt = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (paper[i][j]) cnt++;
		}
	}

	cout << cnt;
}