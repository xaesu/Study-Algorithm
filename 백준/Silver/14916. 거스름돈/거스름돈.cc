#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = n / 5;
    int temp = n % 5;

    // 금액이 5의 배수면 5원 갯수만 체크
    if (temp == 0) {
        cout << cnt;
        return 0;
    }

    while (cnt >= 0) {
        // 5원의 최대 갯수를 제한 금액이 짝수면 계산 종료
        if (temp % 2 == 0) {
            cnt += temp / 2;
            cout << cnt;
            return 0;
        }

        // 짝수가 아니면 5원 동전 하나를 줄이고 재계산
        cnt--;
        temp += 5;
    }

    // 어떤 경우에도 나눌 수 없으면 -1 출력
    cout << -1;
}
