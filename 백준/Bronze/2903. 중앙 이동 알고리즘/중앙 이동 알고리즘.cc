#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int result(0);
	result = (int)pow(pow(2, N) + 1, 2);

	cout << result;
}