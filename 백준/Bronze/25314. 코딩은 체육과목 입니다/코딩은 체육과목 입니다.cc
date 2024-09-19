#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int num = N / 4;

	for (int i = 0; i < num; i++) {
		cout << "long ";
	}

	cout << "int";
}