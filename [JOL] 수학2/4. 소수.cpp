#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int M, N;
    int sum = 0, min;
    int cnt = 0, pnum = -1;
    int prime[10000] = {};

    cin >> M >> N;
    if (!(0 < M && M <= 100000 && 0 < N && N <= 100000 && M <= N)) return 0;

    // M이 1일 때, 1은 소수도 합성수도 아니므로 2부터 판별
    if (M == 1) M = 2;

    for (int i = M; i <= N; i++) {

        // i가 소수인지 판별
        for (int j = 2; j <= sqrt(i); j++) {
            if (!(i % j)) cnt++;
        }

        // 제곱근까지의 약수의 개수가 0개일 때 (1제외) 소수
        if (!cnt) {
            prime[++pnum] = i;
            sum += i;
            cnt = 0;
        }

        cnt = 0;
    }

    if (prime[0] == 0) cout << -1 << endl;
    else cout << sum << endl << prime[0] << endl;
}