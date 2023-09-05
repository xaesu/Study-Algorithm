#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    int cnt = 0;      // 소수인 지 확인
    int pnum = -1;     // prime 순서
    int arr[100] = {};
    int prime1, prime2;

    cin >> N;
    //if (!(0 < N && N <= 100)) return 0;   // 입력 범위를 벗어나는 입력은 없음(조건)

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (!(0 < arr[i] && arr[i] <= 1000000) && arr[i] % 2) return 0;
    }

    // 입력 받은 수 순서로 체크
    for (int i = 0; i < N; i++) {

        // 입력받은 수와 그보다 작은 수 중 가장 큰 소수
        for (int j = arr[i]; j > 1; j--) {

            // j가 소수인지 판별
            for (int k = 2; k <= sqrt(j); k++) {
                if (!(j % k)) cnt++;
            }

            // 제곱근까지의 약수의 개수가 0개일 때 (1제외) 소수
            if (!cnt) {
                prime1 = j;
                cnt = 0;
                break;
            }

            cnt = 0;
        }

        // 입력받은 수보다 큰 수 체크
        for (int j = arr[i] + 1; j <= 1000000; j++) {

            // j가 소수인지 판별
            for (int k = 2; k <= sqrt(j); k++) {
                if (!(j % k)) cnt++;
            }

            // 제곱근까지의 약수의 개수가 0개일 때 (1제외) 소수
            if (!cnt) {
                prime2 = j;
                break;
            }

            cnt = 0;
        }
        
        int a = arr[i] - prime1;
        int b = prime2 - arr[i];

        if (a == b) cout << prime1 << ' ' << prime2 << endl;
        else if (a < b) cout << prime1 << endl;
        else if (a > b) cout << prime2 << endl;
    }
}