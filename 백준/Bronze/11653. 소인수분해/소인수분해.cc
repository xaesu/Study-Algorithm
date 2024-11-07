#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void sieve(int n, vector<int>& primes);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 1)
        return 0;

    // n보다 작은 소수를 벡터에 추가
    vector<int> prime;
    sieve(n, prime);

    // 소인수 분해
    vector <int> primeFactor;
    for (int i = 0; i < prime.size(); i++) {
        while (1) {
            if (n % prime[i] == 0) {
                primeFactor.push_back(prime[i]);
                n /= prime[i];
            }
            else break;
        }
    }

    for (int factor : primeFactor) {
        cout << factor << '\n';
    }
}

// 소수 판별
void sieve(int n, vector<int>& primes) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}