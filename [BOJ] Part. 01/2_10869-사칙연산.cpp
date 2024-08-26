#include <iostream>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    
    // 범위 검증
    if (!(1 <= A && A <= 10000 && 1 <= B && B <= 10000)) {
        cout << "INPUT ERROR!";
        return 0;
    }
    
    // 사칙연산 수행
    cout << A+B << '\n' << A-B << '\n' << A*B << '\n' << A/B << '\n' << A%B;   
}