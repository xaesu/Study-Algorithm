#include <iostream>
using namespace std;

int main() {
    int chess[6];

    // 입력
    for (int i = 0; i < 6; i++) {
        cin >> chess[i];
    }

    for (int i = 0; i < 6; i++) {
        if (i <= 1) cout << 1 - chess[i] << ' ';
        else if (i <= 4) cout << 2 - chess[i] << ' ';
        else cout << 8 - chess[i] << ' ';
    }
}