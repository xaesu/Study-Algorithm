#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int input, cnt = 1;
	vector<int> num;
	for (int i = 0; i < 10; i++) {
		cin >> input;
		num.push_back(input % 42);
	}

	// 중복 값 삭제
	sort(num.begin(), num.end());
	num.erase(unique(num.begin(), num.end()), num.end());

	cout << num.size();
}