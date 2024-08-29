#include<iostream>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    // 첫날 하루부터 시작
    int day = 1;

    // 정상까지 날짜 계산
    day += (V - A) / (A - B);

    // 마지막 날 거리가 남아있으면 하루 추가
    if ((V - A) % (A - B))
        day++;

    cout << day;
}