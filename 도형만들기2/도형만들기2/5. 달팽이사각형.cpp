#include <iostream>
using namespace std;

// 다차원 배열을 함수의 파라미터로 전달할 때는 배열의 두 번째 이상의 차원 크기를 명시
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
    int x = 0, y = -1, num = 1;

    while (m > 0) {
        for (int i = 0; i < m; i++) arr[x][++y] = num++;
        m--;
        for (int i = 0; i < m; i++) arr[++x][y] = num++;
        for (int i = 0; i < m; i++) arr[x][--y] = num++;
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