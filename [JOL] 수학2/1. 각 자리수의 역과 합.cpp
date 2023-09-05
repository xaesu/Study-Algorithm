#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    int reverse, digit, sum;  // reverse 값, 자릿수의 개수, 자릿수의 합을 담을 변수

    while (1) {
        cin >> num;
        
        // 입력 범위 제한
        if (! (0 < num && num < 2100000000) ) return 0;

        // 입력받은 수의 자릿수 구하기
        digit = -1;
        sum = 0;
        reverse = 0;

        for (int temp = num; temp > 0; temp /= 10) {
            digit++;
            sum += temp % 10;
        }

        // 자리수의 역과 합 구하기
        for (int i = (int)pow(10, digit); num != 0; i /= 10, num /= 10) {
            reverse += num % 10 * i;
        }

        cout << reverse << ' ' << sum << endl;
    }
}