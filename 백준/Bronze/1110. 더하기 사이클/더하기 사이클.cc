#include <iostream>
using namespace std;

int main() {
	int num;
	int cnt(0), first(0), temp(0);
	cin >> num;
	first = num;

	while (1) {
		temp = (num % 10) * 10 + (num / 10 + num % 10) % 10;
		cnt++;
		num = temp;
		if (temp == first)
			break;
	}
	cout << cnt << '\n';
}