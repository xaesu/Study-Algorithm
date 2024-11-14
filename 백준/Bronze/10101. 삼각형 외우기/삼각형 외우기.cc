#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c != 180) {
        cout << "Error";
        return 0;
    }

    if (a == b && b == c) {
        cout << "Equilateral";
        return 0;
    }

    if (a == b || b == c || a == c) {
        cout << "Isosceles";
        return 0;
    }

    if (a != b && b != c && a != c) {
        cout << "Scalene";
        return 0;
    }
}