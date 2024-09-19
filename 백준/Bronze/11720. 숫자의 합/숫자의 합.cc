#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    string numArr;
    cin >> numArr;

    for (int i = 0; i < N; i++) {
        sum += (numArr[i] - '0');
    }

    cout << sum;
}