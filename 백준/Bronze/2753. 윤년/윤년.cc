#include <iostream>
using namespace std;

int main(){
    //윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
    //첫째 줄에 윤년이면 1, 아니면 0을 출력한다.
    
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