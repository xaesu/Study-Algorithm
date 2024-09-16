#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    // 실수의 소수점 자릿수 활용 (고정소수점+자릿수 출력)
    cout << fixed << setprecision(12);
    cout << A / B;
}