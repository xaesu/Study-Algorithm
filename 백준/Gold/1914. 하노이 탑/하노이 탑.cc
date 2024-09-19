#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string HanoiCount(int n);
void HanoiProcess(int n, int from, int aux, int to);

int main() {
    int N;
    cin >> N;

    cout << HanoiCount(N) << '\n';

    // N이 20보다 같거나 작을 때만 과정 출력
    if (N <= 20)
        HanoiProcess(N, 1 , 2, 3);
}

// 하노이 이동 횟수
string HanoiCount(int n) {
    string Hanoi;
    Hanoi = to_string(pow(2, n));
    Hanoi = Hanoi.substr(0, Hanoi.find('.'));
    Hanoi[Hanoi.size() - 1] -= 1;

    return Hanoi;
}

// 하노이 이동 과정
void HanoiProcess(int n, int from, int aux, int to) {
    if (n == 1){
        cout << from << ' ' << to << '\n';
        return;
    }

    // 가장 작은 원판부터 옮기기
    HanoiProcess(n-1, from, to, aux);
    
    // 가장 큰 원판을 From에서 To로 이동
    cout << from << ' ' << to << '\n';

    // 가장 큰 원판을 제외한 나머지 원판에서 순서대로 Mid원판에 있는 상태
    // Mid 장대와 From 장대 순서가 바뀐 상태에서 다시 HanoiProcess 실행
    HanoiProcess(n-1, aux, from, to);
}