#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;

    string result;
    while (N > 0) {
        int remainder = N % B;

        // 10 이상의 나머지 알파벳으로 변환
        if (remainder >= 10) {
            result += (char)(remainder - 10 + 'A'); 
        }
        else {
            result += (char)(remainder + '0');
        }
        N /= B;
    }

    // 배열 역순 -> 진법 변환
    reverse(result.begin(), result.end());

    cout << result;
}