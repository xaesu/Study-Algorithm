#include <iostream>
#include <vector>
#include <algorithm>
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

	for (int i = 0; i < n; i++) {
        // lower_bound를 사용하여 이분 탐색
        cout << lower_bound(copy.begin(), copy.end(), coordinate[i]) - copy.begin() << ' ';
    }
}
