#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);	// 입력 버퍼 비워주기 + 입력 받기
	ios_base::sync_with_stdio(false);	// 독립 버퍼 사용 (Cpp or C 단독 사용 필수)

	int T;
	cin >> T;

	vector <int> add(T);
	vector <int> a(T);
	vector <int> b(T);

	// 입력
	for (int i = 0; i < T; i++) {
		cin >> a[i] >> b[i];
		add[i] = a[i] + b[i];
	}

	// 출력
	for (int i = 0; i < T; i++) {
		cout << "Case #" << i+1 << "\: " << a[i] << " + " << b[i] << " = " << add[i] << '\n';
	}
}