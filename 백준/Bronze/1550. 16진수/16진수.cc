#include <iostream>
#include <string>
using namespace std;

int main()
{
	int dig = 0;
	string hex;

	cin >> hex;

	for (int i = 0; i < hex.size(); ++i) {
		dig *= 16;

		if (hex[i] >= 'A' && hex[i] <= 'F') {
			dig += hex[i] - 'A' + 10;
		}
		else {
			dig += hex[i] - '0';
		}
	}
	cout << dig;
}