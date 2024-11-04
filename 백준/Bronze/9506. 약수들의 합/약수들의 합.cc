#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n(0);
    while (1) {
        cin >> n;
        if (n == -1) return 0;

        int sum(0);
        vector<int> divisor;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                sum += i;
                divisor.push_back(i);

                if (i != 1 && i != n / i) {
                    sum += n / i;
                    divisor.push_back(n / i);
                }
            }
        }

        if (sum == n) {
            cout << n << " = ";
            sort(divisor.begin(), divisor.end());
            for (int i = 0; i < divisor.size(); i++) {
                cout << divisor[i];
                if (i != divisor.size() - 1) {
                    cout << " + ";
                }
            }
            cout << '\n';
        }
        else {
            cout << n << " is NOT perfect.\n";
        }
    }
}
