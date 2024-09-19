#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> nineDwarves(9, 0);
	vector<int> sevenDwarves(7, 0);
	int fraud[2] = {};
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> nineDwarves[i];
		sum += nineDwarves[i];
	}

	int temp = sum, minusOne;

	// 합계가 100인 일곱 난쟁이 추출
	for (int i = 0; i < 9; i++) {
		temp -= nineDwarves[i];
		minusOne = temp;
		for (int j = 0; j < 9; j++) {
			if (i == j) continue;
			temp -= nineDwarves[j];
			if (temp == 100) {
				fraud[0] = i;
				fraud[1] = j;
				break;
			}
			temp = minusOne;
		}
		temp = sum;
	}

	// 일곱 난쟁이 키 저장
	int k = 0;
	for (int i = 0; i < 9; i++) {
		if (i == fraud[0] || i == fraud[1]) continue;
		sevenDwarves[k] = nineDwarves[i];
		k++;
	}

	// 일곱난쟁이 키 오름차순 정렬
	sort(sevenDwarves.begin(), sevenDwarves.end());

	// 출력
	for (int i = 0; i < 7; i++) {
		cout << sevenDwarves[i] << '\n';
	}
}