#include <iostream>
#include <string>
using namespace std;

int main() {
	string stat;
	cin >> stat;

	int K = stoi(stat.substr(0, stat.find('/')));
	stat = stat.substr(stat.find('/') + 1);
	int D = std::stoi(stat.substr(0, stat.find('/')));
	int A = std::stoi(stat.substr(stat.find('/') + 1));

	if (D == 0 || K + A < D) {
		std::cout << "hasu" << std::endl;
	}

	else {
		std::cout << "gosu" << std::endl;
	}
}
