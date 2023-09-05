#include <iostream>
using namespace std;

void makeStar(int n);

int main()
{
    int N;
    cin >> N;

    // 입력 범위 지정
    if (!(1 <= N && N <= 100 && N % 2)) {
        cout << "INPUT ERROR!";
        return 0;
    }

    makeStar(N);
}

void makeStar(int n) {
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++)
            cout << ' ';
        for (int j = 0; j < 1 + 2 * i; j++)
            cout << '*';
        cout << endl;
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2 - i - 1; j++)
            cout << ' ';
        for (int j = 0; j < n / 2 - 2 * i + n / 2 - 1; j++)
            cout << '*';
        cout << endl;
    }
}