#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main()
{
    int a, b;
    cin >> a >> b;

    // a ~ b 사이의 값 중 소수이면 벡터에 추가
    vector <int> prime;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            prime.push_back(i);
        }
    }

    if (prime.size()) {
        int sum(0);
        for (int i = 0; i < prime.size(); i++) {
            sum += prime[i];
        }

        cout << sum << '\n' << prime[0];
    }
    else cout << "-1";
}

// 소수 판별
bool isPrime(int n) {
    if (n < 2) return false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}