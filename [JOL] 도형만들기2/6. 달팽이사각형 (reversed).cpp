#include <iostream>
using namespace std;

void fillArr(int m, int arr[][110]);
void output(int n, int arr[][110]);

int main()
{
    int n;
    cin >> n;

    if (!(1 <= n && n <= 100)) return 0;

    int arr[110][110] = {};
    int m = n;

    // 배열 채우기
    fillArr(m, arr);

    // 출력
    output(n, arr);
}

void fillArr(int m, int arr[][110]) {
    int x = 0, y = m, num = 1;

    while (m > 0) {
        for (int i = 0; i < m; i++) arr[x][--y] = num++;
        m--;
        for (int i = 0; i < m; i++) arr[++x][y] = num++;
        for (int i = 0; i < m; i++) arr[x][++y] = num++;
        m--;
        for (int i = 0; i < m; i++) arr[--x][y] = num++;
    }
}

void output(int n, int arr[][110]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}