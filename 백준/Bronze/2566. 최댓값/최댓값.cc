#include <iostream>
using namespace std;

int main()
{
    int arr[9][9] = {};

    // 입력
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    // 최댓값 체크
    int max = 0, a, b;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max <= arr[i][j]) {
                max = arr[i][j];
                a = i + 1;
                b = j + 1;
            }
        }
    }

    cout << max << '\n';
    cout << a << ' ' << b;
}