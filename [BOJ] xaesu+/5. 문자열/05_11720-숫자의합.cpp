#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, sum = 0;
    string numArr;

    // 입력
    cin >> N;
    cin >> numArr;

    // 한글자씩 int로 변환해 합계 구하기
    for (int i = 0; i < N; i++) {
        sum += (numArr[i] - '0');
    }

    cout << sum;
}