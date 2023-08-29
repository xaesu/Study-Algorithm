#include <iostream>
using namespace std;

void fillArr(int n, int arr[][100]);
void output(int n, int arr[][100]);

int main()
{
    int n;
    cin >> n;

    // 입력 범위 체크
    if (!(1 <= n && n <= 100)) return 0;

    int arr[100][100] = { };

    // 배열 채우기
    fillArr(n, arr);

    // 출력
    output(n, arr);
}

void fillArr(int n, int arr[][100]) {
    int x = 0, y = 0, num = 1, cnt = 0;
    bool round = true;

    // 윗 삼각형
    for (int i = 0; i < n; i++) {
        if (round) {
            for (int j = 0; j <= i; j++) {
                arr[x++][y--] = num++;
            }
            x = ++cnt;
            y++;
            round = false;
        }

        else {
            for (int j = 0; j <= i; j++) {
                arr[x--][y++] = num++;
            }
            y = ++cnt;
            x++;
            round = true;
        }
    }

    // 값 보정
    if (round) {
        x++;
        y--;
    }
    
    else {
        x--;
        y++;
    } 

    // 아래 삼각형
    for (int i = 1; i < n; i++) {
        if (round) {
            for (int j = n; j > i; j--) {
                arr[x++][y--] = num++;
            }
            x--;
            y += 2;
            round = false;
        }

        else {
            for (int j = n; j > i; j--) {
                arr[x--][y++] = num++;
            }
            x += 2;
            y--;
            round = true;
        }
    }
}

void output(int n, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }
}