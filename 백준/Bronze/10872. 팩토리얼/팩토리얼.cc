#include <iostream>
using namespace std;

int Factorial (int n);

int main() {
    int N;
    cin >> N;

    cout << Factorial(N);
}

// 팩토리얼 재귀 함수 구현
int Factorial (int n) {
    if (n <= 1) return 1;
    return n * Factorial(n-1);
}