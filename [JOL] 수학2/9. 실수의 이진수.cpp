#include <iostream>
using namespace std;

// 정수부 변환
void Convert(int N) {
    if (N < 1) return;
    Convert(N / 2);
    cout << N % 2;
}

// 실수부 변환
void Convert(double N, int cnt) {
    if (cnt == 0) return;
    N *= 2;
    int A = N / 1;
    cout << A;
    Convert(N - A, --cnt);
}

int main() {
    double N;
    cin >> N;
    if (!(0 < N && N < 100)) return 0;

    int A = N / 1;
    double B = N - A;

    if (!A) cout << "0.";
    else {
        Convert(A);
        cout << '.';
    }
    Convert(B, 4);
}