#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<float> score(N, 0);
	vector<float> oper(N, 0);

	float M = 0;
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (M < score[i]) M = score[i];
	}
	
	// 점수 조작
	for (int i = 0; i < N; i++) {
		oper[i] = (score[i] / M) * 100.0;
	}

	// 평균 계산
	float sum = 0;
	for (int i = 0; i < N; i++) {
		sum += oper[i];
	}

	float avg = sum / N;
	cout << avg;
}