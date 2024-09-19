#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string roomNum;
	cin >> roomNum;

	// 문자열 분리
	int N = roomNum.size();
	vector<int> rNum(N);

	for (int i = 0; i < N; i++) {
		rNum[i] = roomNum[i] - '0';
	}

	//// 문자열 분리 테스트
	//for (int i = 0; i < N; i++) {
	//	cout << rNum[i] << ' ';
	//}

	// 번호 갯수 체크
	int num[10] = {};
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (rNum[i] == j) num[j]++;
		}
	}
	
	// 6, 9는 갯수 조정 필요
	int sixnine = num[6] + num[9];
	num[6] = (sixnine + 1) / 2;
	num[9] = num[6];

	// 최대 번호 갯수 확인
	int maxNum = 0, max = 0;
	for (int i = 0; i <= 9; i++) {
		if (max < num[i]) {
			maxNum = i;
			max = num[i];
		}                                                    
	}

	cout << max;
}