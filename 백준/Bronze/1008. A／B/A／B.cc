#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    cout << fixed << setprecision(12);
    cout << A / B;
}