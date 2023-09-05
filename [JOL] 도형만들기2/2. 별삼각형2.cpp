#include <iostream>
using namespace std;

void makeStar1(int n);
void makeStar2(int n);
void makeStar3(int n);
void makeStar4(int n);

int main()
{
    int n, m;
    cin >> n >> m;

    // 입력 범위 지정
    if (!(0 < n && n <= 100 && 1 <= m && m <= 4 && n % 2)) {
        cout << "INPUT ERROR!";
        return 0;
    }

    // 종류에 따라 함수 호출
    switch (m) {
    case 1:
        makeStar1(n);
        break;
    case 2:
        makeStar2(n);
        break;
    case 3:
        makeStar3(n);
        break;
    case 4:
        makeStar4(n);
        break;
    }
}

void makeStar1(int n) {
    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 1; i <= n / 2; i++) {
        for (int j = n / 2; j >= i; j--)
            cout << '*';
        cout << endl;
    }
}

void makeStar2(int n) {
    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = n / 2 + 1; j >= i + 1; j--)
            cout << ' ';
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 1; i <= n / 2; i++) {
        for (int j = 1; j <= i; j++)
            cout << ' ';
        for (int j = n / 2; j >= i; j--)
            cout << '*';
        cout << endl;
    }
}

void makeStar3(int n) {
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++)
            cout << ' ';
        for (int j = 1; j <= n - (i * 2); j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = n / 2; j > i + 1; j--)
            cout << ' ';
        for (int j = 1; j <= 2 * i + 3; j++)
            cout << '*';
        cout << endl;
    }
}

void makeStar4(int n) {
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++)
            cout << ' ';
        for (int j = 1; j <= n / 2 + 1 - i; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++)
            cout << ' ';
        for (int j = 0; j < i + 2; j++)
            cout << '*';
        cout << endl;
    }
}