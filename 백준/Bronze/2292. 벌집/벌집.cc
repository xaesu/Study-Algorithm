#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int order(1), check(1);
	while (N > check) {
		check += (6 * order);
		order++;
	}

	cout << order;
}