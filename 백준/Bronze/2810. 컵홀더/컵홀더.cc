#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string seats;
	cin >> N >> seats;

	// 맨 좌측 홀더 갯수 하나
	int holder(1);

	// 홀더 갯수 체크
	for (int i = 0; i < N; i++) {
		if (seats[i] == 'S') holder++;
		// 커플석은 2칸 차지
		else if (seats[i] == 'L') {
			holder++;
			i++;
		}
	}

	// 최대 수용 인원 확인
	int result = (holder <= N) ? holder : N;
	cout << result;
}
