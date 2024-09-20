#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int submit;
	vector<int> student(31, 0);	// 0번 인덱스 사용 X
	
	// 제출한 학생 체크
	for (int i = 0; i < 28; i++) {
		cin >> submit;
		student[submit] = 1;
	}

	// 체크되지 않은 학생 출력
	for (int i = 1; i <= 30; i++) {
		if (!student[i]) cout << i << '\n';
	}
}