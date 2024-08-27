#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    
    // 입력범위 제한
    if (!(1 <= year && year <= 4000)) {
        cout << "INPUT ERROR!";
        return 0;
    }
    
    // 윤년 확인
    if (year % 4 == 0 && !(year % 100 == 0) || year % 400 == 0)
        cout << 1;
    else cout << 0;
}