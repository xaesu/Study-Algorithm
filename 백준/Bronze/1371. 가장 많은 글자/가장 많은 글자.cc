#include <iostream>
#include <vector>
using namespace std;

int main() {
    char c;
    vector<int> alphaCnt(26, 0);
    
    // 입력
    while (cin >> c) {
        // 알파벳 입력 시, 해당 배열 갯수 증가
        if ('a' <= c && c <= 'z') {
            alphaCnt[c - 'a']++;
        }
    }

    // 가장 많은 글자 찾기
    int max(0);
    vector<int> index_M; 
    for (int i = 0; i < 26; i++) {
        if (max < alphaCnt[i]) {
            max = alphaCnt[i];
            index_M = {i};
        }
        else if (max == alphaCnt[i]) {
            index_M.push_back(i);
        }
    }

    for (int i = 0; i < index_M.size(); i++) {
        cout << char(index_M[i] + 'a');
    }
    cout << '\n';
    
    return 0;
}