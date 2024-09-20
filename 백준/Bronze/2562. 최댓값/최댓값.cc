#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num(9, 0);
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = 0, index = 0;
	for (int i = 0; i < 9; i++) {
		if (max < num[i]) {
			max = num[i];
			index = i;
		}
	}

	cout << max << '\n' << index + 1 << '\n';
}