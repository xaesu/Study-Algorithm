#include <iostream>
using namespace std;

void fillArr(int n, int arr[][100]);
void output(int n, int arr[][100]);

int main()
{
    int N;
    cin >> N;

    if (!(2 <= N && N <= 100) && N % 2) return 0;

    int arr[100][100];

    fillArr(N, arr);
    output(N, arr);
}

void fillArr(int n, int arr[][100]) {
    int x = 0, y = n / 2;
    int num = 0;

    arr[x][y] = ++num;

    while (num <= n * n) {
        if (! (num % n))
            arr[++x][y] = ++num;
        else {
            x--;
            y--;

            if (x < 0) 
                x = n - 1;

            else if (y < 0) 
                y = n - 1;
            
            arr[x][y] = ++num;
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