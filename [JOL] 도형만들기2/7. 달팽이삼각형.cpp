#include <iostream>
using namespace std;

void fillArr(int n, int arr[][101]);
void output(int n, int arr[][101]);

int main()
{
    int N;
    cin >> N;

    if (!(0 < N && N <= 100)) return 0;

    int arr[101][101];
    int n = N;

    // 배열 채우기
    fillArr(n, arr);

    // 출력
    output(N, arr);
}

void fillArr(int n, int arr[][101]) {
    int x = -1, y = -1, num = 0;

    while (n > 0) {
        for (int i = 0; i < n; i++) arr[++x][++y] = num++ % 10;
        n--;
        for (int i = 0; i < n; i++) arr[x][--y] = num++ % 10;
        n--;
        for (int i = 0; i < n; i++) arr[--x][y] = num++ % 10;
        n--;
    }
}

void output(int n, int arr[][101]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}