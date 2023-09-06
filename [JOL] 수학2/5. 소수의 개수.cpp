#include <iostream>
using namespace std;

// 에라토스테네스의 체 배열 선언 및 초기화
// 0과 1을 해당되지 않으므로 1로 체크
// 메모리가 큰 수는 전역변수로 선언
bool Eratos[3'000'001] = { 1, 1, };

void EratosSieve() {
    // 최적화 : 자신보다 앞에 있는 수의 배수는 해당 수의 차례에서 이미 체크됨 (i * i)
    for (int i = 2; i * i <= 3e6; i++) {
        if (Eratos[i]) continue;   // 체크된(소수가 아닌) 수 건너뛰기

        // 체크되지 않은 수의 배수(소수가 아님) 체크
        for (int j = i * i; j <= 3e6; j += i) Eratos[j] = 1;
    }
}

int main()
{
    int M, N;
    cin >> M >> N;

    EratosSieve();

    // 남아있는 수(소수)의 개수 파악
    int cnt = 0;
    for (int i = M; i <= N; i++) {
        if (!Eratos[i]) ++cnt;
    }
    cout << cnt << endl;
}

