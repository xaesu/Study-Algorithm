#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    // 입력 범위 제한
    if (!(1 <= N && N <= 10000 && 1 <= X && X <= 10000)) {
        cout << "INPUT ERROR!";
        return 0;
    }

    // 수열 선언 & 입력
    int *A = new int [N];
    for (int i = 0; i < N; i++)
        cin >> A[i];

    // 수열 X보다 작은 수 출력
    for (int i = 0; i < N; i++)
        if (A[i] < X) cout << A[i] << ' ';

    delete[] A;
}