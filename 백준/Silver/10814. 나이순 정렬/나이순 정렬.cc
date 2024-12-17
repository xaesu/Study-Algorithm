#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class member {
public :
	int age;
	string name;
};

bool compareByAge(const member& a, const member& b) {
	return a.age < b.age;
}

int main() {
	int n;
	cin >> n;

	vector <member> gudge(n);

	for (int i = 0; i < n; i++) {
		cin >> gudge[i].age >> gudge[i].name;
	}

    // 비교 값이 같을 때 입력 순서 유지
	stable_sort(gudge.begin(), gudge.end(),compareByAge);

	for (int i = 0; i < n; i++) {
		cout << gudge[i].age << " " << gudge[i].name << "\n";
	}
}
