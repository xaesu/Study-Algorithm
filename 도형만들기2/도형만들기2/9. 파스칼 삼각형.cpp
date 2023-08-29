#include <iostream>
using namespace std;

void fillP(int n, int arr[][31]);

void outputP1(int n, int arr[][31]);
void outputP2(int n, int arr[][31]);
void outputP3(int n, int arr[][31]);

int main()
{
    int n, m;
    cin >> n >> m;

    //입력 범위 설정
    if (!(1 <= n && n <= 30 && 1 <= m && m <= 3)) return 0;

    int arr[31][31] = {};

    fillP(n, arr);

    switch (m) {
    case 1:
        outputP1(n, arr);
        break;
    case 2:
        outputP2(n, arr);
        break;
    case 3:
        outputP3(n, arr);
        break;
    }
}

// 파스칼 배열 채우기
void fillP(int n, int arr[][31]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1 || i == j) arr[i][j] = 1;
            else arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
}


void outputP1(int n, int arr[][31]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

void outputP2(int n, int arr[][31]) {
    for (int i = n; i > 0; i--) {
        for (int j = n; j > i; j--)
            cout << ' ';
        for (int j = 1; j <= i; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}

void outputP3(int n, int arr[][31]) {
    int x = n, y = n;
    for (int i = n; i > 0; i--) {
        for (int j = n; j >= i; j--)
            cout << arr[x--][y] << ' ';
        x = n;
        y--;
        cout << endl;
    }
}