#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int C, N;
    cin >> C;

    // 테스트 케이스 배열 생성 및 점수 입력
    int ** arr = new int * [C];
    int * testCase = new int [C];
    
    for (int i = 0; i < C; ++i) {
        cin >> N;
        arr[i] = new int [N];
        testCase[i] = N;
        
        for (int j = 0; j < N; ++j)
            cin >> arr[i][j];
    }

    for (int i = 0; i < C; ++i) {
        int sum = 0, cnt = 0;
        float avg, ratio;


        // 평균 계산
        for (int j = 0; j < testCase[i]; ++j)
            sum += arr[i][j];
        avg = (float)sum / testCase[i];
        
        // 평균 이상 학생 계산
        for (int j = 0; j < testCase[i]; ++j) {
            if (arr[i][j] > avg) cnt++;
        }

        ratio = (float)cnt / testCase[i] * 100.0;
        
        // 고정 소수점 표기 + 소수점 아래 자릿수 지정
        cout << fixed << setprecision(3);
        cout << ratio << '%' << '\n';

        delete[] arr[i];
    }

    delete[] arr;
}