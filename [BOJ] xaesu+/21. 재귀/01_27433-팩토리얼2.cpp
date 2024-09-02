#include <iostream>
using namespace std;

long Factorial(int n);

int main() {
    int N;
    cin >> N;

    cout << Factorial(N);
}

long Factorial(int n) {
    if (n <= 1) return 1;
    return n * Factorial(n - 1);
}