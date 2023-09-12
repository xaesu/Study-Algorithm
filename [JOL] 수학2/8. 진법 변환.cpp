#include <iostream>
using namespace std;

long long Honer(string N, int A) {
    long long dec = 0;

    for (int i = 0; i < N.length(); i++) {
        dec *= A;
        if (A < 10) dec += N[i] - '0';
        else {
            if (N[i] >= 'A') dec += N[i] - 'A' + 10;
            else dec += N[i] - '0';
        }
    }

    return dec;
}

void Convert(long long N, int B) {
    if (N < 1) return;
    Convert(N / B, B);

    if (B < 10) cout << N % B;
    else {
        if (N % B >= 10) cout << (char)('A' + N % B - 10);
        else cout << N % B;
    }
}

int main() {
    int A, B;
    string S;
    
    int cnt = 0;
    while (cnt++ < 100) {
        // 테스트 케이스 입력
        cin >> A;
        if (!A) return 0;    // 0이 입력되면 테스트 끝
        cin >> S >> B;
        if (!S.compare("0")) {
            cout << S<<endl;
            continue;
        }

        Convert(Honer(S, A), B);

        cout << endl;
    }
}