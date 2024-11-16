#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3);

    // 삼각형 가장 긴 변은 나머지 두 변의 합보다 작다
    if (a[0] + a[1] <= a[2]) {
        a[2] = a[0] + a[1] - 1;
    }

    cout << a[0] + a[1] + a[2] << endl;

    return 0;
}
