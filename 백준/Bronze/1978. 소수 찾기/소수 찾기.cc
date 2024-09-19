#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num);

int main() {
    int N, cnt = 0;
    cin >> N;

    int * num = new int [N];

    // 입력
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // 소수일 경우 갯수 추가
    for (int i = 0; i < N; i++) {
        if (isPrime(num[i])) cnt++;
    }

    cout << cnt;
}

// 소수 판별 (1은 소수가 아님)
bool isPrime(int num) {
    if (num > 1) {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
    else return false;
}