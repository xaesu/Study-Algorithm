#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // 두 수가 같을 때 예외 처리
    if (a == b) {
        cout << 0;
        return 0;
    }

    // 작은 수를 a로 설정 (오름차순 출력)
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int n = b - a;
    

    cout << n - 1 << '\n';
    for (int i = a + 1; i < b; i++) {
        cout << i << ' ';
    }
}