#include <iostream>
using namespace std;

void fillSpace(int N, char arr[][200]);
void fillAlpha(int N, char arr[][200]);
void outputArr(int N, char arr[][200]);

int main() {
    int N;
    cin >> N;

    if (!(1 <= N && N <= 100)) return 0;

    char arr[200][200];

    fillSpace(N, arr);

    fillAlpha(N, arr);

    // 출력
    outputArr(N, arr);

}

// 배열 출력 범위에 공백 문자 채우기
void fillSpace(int N, char arr[][200]) {
    for (int i = 0; i < N * 2 - 1; i++) {
        for (int j = 0; j < N * 2 - 1; j++)
            arr[i][j] = ' ';
    }
}

// 배열에 문자 채우기
void fillAlpha(int N, char arr[][200]) {
    int x = 0, y = N, n = N - 1, num = 0;

    while (n >= 0) {
        arr[x][--y] = 'A' + (num++ % 26);
        for (int i = 0; i < n; i++) arr[++x][--y] = 'A' + (num++ % 26);
        for (int i = 0; i < n; i++) arr[++x][++y] = 'A' + (num++ % 26);
        for (int i = 0; i < n; i++) arr[--x][++y] = 'A' + (num++ % 26);
        n--;
        for (int i = 0; i < n; i++) arr[--x][--y] = 'A' + (num++ % 26);
    }
}

void outputArr(int N, char arr[][200]) {
    for (int i = 0; i < N * 2 - 1; i++) {
        for (int j = 0; j < N * 2 - 1; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}