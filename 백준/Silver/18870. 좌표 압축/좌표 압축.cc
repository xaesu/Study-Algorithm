#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector <int> coordinate(n);
	vector <int> copy(n);

	for (int i = 0; i < n; i++) {
		cin >> coordinate[i];
	}

	// 입력 값 복사
	copy = coordinate;

	// 중복값 제거 (비교 대상 확인)
	sort(copy.begin(), copy.end());
	copy.erase(unique(copy.begin(), copy.end()), copy.end());

	// 선형탐색 -> 시간초과
	/*for (int i = 0; i < n; i++) {
		cout << find(copy.begin(), copy.end(), coordinate[i]) - copy.begin() << ' ';
	}*/

	// 값을 압축된 값으로 매핑
	unordered_map<int, int> compress;
	for (int i = 0; i < copy.size(); i++) {
		compress[copy[i]] = i;
	}

	for (int i = 0; i < n; i++) {
		cout << compress[coordinate[i]] << ' ';
	}
}
