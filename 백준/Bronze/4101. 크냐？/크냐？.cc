#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a(0), b(0);
	
	while (1) {
		cin >> a >> b;
		if (!(a && b)) break;

		if (a > b)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';
	}
}