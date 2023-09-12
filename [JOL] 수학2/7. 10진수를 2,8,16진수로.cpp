#include <iostream>
using namespace std;

void Convert(int N, int B) {
    if (N < 1) return;
    Convert(N / B, B);
    if (B != 16) cout << N % B;
    else {
        if (N % B >= 10) cout << (char)('A' + N % B - 10);
        else cout << N % B;
    }
}

int main() {
    int N, B, A = 0;
    cin >> N >> B;

    Convert(N, B);
}