#include <iostream>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr, int max);

int main()
{
    int N,input;
    cin >> N;

    // 입력 받은 수의 갯수를 count 배열에 저장
    vector<int> count(10001);
    for (int i = 0; i < N; i++) {
        cin >> input;
        count[input]++;
    }

    // count 배열을 순차적으로 순회하면서 숫자 출력
    for (int i = 1; i <= 10000; i++) {
        while (count[i] > 0) {
            cout << i << '\n';
            count[i]--;
        }
    }
}