#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string num;
    cin >> num;

    sort(num.begin(), num.end(), greater<>());

    cout << num;
}
