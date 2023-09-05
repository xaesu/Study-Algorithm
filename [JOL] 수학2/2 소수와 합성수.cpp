#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cnt = 0;
    int arr[5] = {};

    // 5개의 수 입력
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (!(0 < arr[i] && arr[i] <= 1000000000)) return 0;
    }

    // 소수 합성수 구분
    for (int i = 0; i < 5; i++) {
        cnt = 0;

        if (arr[i] == 1) cout << "number one" << endl;

        else {
            // 1로 나누었을 때 나누어 떨어지는 수는 없으므로 2부터 검사
            for (int j = 2; j <= sqrt(arr[i]); j++) {
                if (!(arr[i] % j)) cnt++;
            }

            // 제곱근까지의 약수가 1개 이상일 때 합성수
            if (cnt) cout << "composite number" << endl;
            else cout << "prime number" << endl;
        }
    }
}