#include <iostream>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    
    // 범위 검증
    if (!(100 <= n1 && n1 <= 999 && 100 <= n2 && n2 <= 999)) {
        cout << "INPUT ERROR!";
        return 0;
    }
    
    // 자릿수 분해
    int d1 = n2 % 10;
    int d10 = (n2 / 10) % 10;
    int d100 = n2 / 100;
    
    // 곱셈 연산 수행
    cout << n1 * d1 << '\n';
    cout << n1 * d10 << '\n';
    cout << n1 * d100 << '\n';
    cout << n1 * n2;
}