#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 퀵 정렬 기반 정렬 함수 <algorithm>
    sort(arr.begin(), arr.end());

    for (int i = 0; i < N; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}