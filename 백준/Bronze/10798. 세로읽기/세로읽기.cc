#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int cnt = 15;
    vector<string> v(5);
    
    // 입력
    string str;
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    // 세로 읽기
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            // 5개 문자에 문자 갯수가 포함되어 있을 때 출력
            if (i < v[j].size()) {
                cout << v[j][i];
            }
        }
    }
}