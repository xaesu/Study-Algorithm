#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // 테스트 케이스 갯수 입력
    int N;
    cin >> N;

    // 테스트 케이스를 담을 배열 생성
    char ** str = new char * [N];
    for (int i = 0; i < N; ++i)
        str[i] = new char[80];

    // 테스트 케이스 입력
    for (int i = 0; i < N; ++i)
        cin >> str[i];
    
    // 입력 값 계산
    for (int i = 0; i < N; ++i){
        int len = strlen(str[i]);
        int sum = 0, score = 1;

        for(int j = 0; j < len; j++) {
            if(str[i][j] == 'O') {
                sum += score++;
            }
            else {
                score = 1;
            }
        }

        // 테스트 케이스 점수 출력
        cout << sum << '\n';
        
        delete[] str[i];
    }

    delete[] str;
}