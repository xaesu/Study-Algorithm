#include <iostream>
using namespace std;

void makeTriangle1(int n);
void makeTriangle2(int n);
void makeTriangle3(int n);

int main()
{
    int n, m;
    cin >> n >> m;

    // 입력 범위 지정
    if (!(1 <= n && n <= 100 && n % 2 && 1 <= m && m <= 3)) {
        cout << "INPUT ERROR!";
        return 0;
    }

    // 종류에 따라 함수 호출
    switch (m) {
    case 1:
        makeTriangle1(n);
        break;

    case 2:
        makeTriangle2(n);
        break;

    case 3:
        makeTriangle3(n);
        break;
    }
}

void makeTriangle1(int n) {
    int num = 1;
    int arr[100][100];

    for (int i = 0; i < n; i++) {
        // 짝수행일때
        if (!((i + 1) % 2)) {
            for (int j = i; j >= 0; j--)
                arr[i][j] = num++;
        }

        //홀수행일때
        else {
            for (int j = 0; j <= i; j++)
                arr[i][j] = num++;
        }
    }


    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void makeTriangle2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++)
            cout << i << ' ';
        cout << endl;
    }
}

void makeTriangle3(int n) {
    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << ' ';
        }
        cout << endl;
    }

    for (int i = n / 2; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << j << ' ';
        cout << endl;
    }
}