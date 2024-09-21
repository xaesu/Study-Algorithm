#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // 행렬 생성
    int** arrA = new int* [N];
    int** arrB = new int *[N];
    for (int i = 0; i < N; i++) {
        arrA[i] = new int[M];
        arrB[i] = new int [M];
    }

    // A행렬 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arrA[i][j];
        }
    }

    // B행렬 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arrB[i][j];
        }
    }

    // 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arrA[i][j] + arrB[i][j] << ' ';
        }
        cout << '\n';
    }
}