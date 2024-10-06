#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // 현재 시간을 구함
    time_t now = time(0);
    tm gmtm;

    // 로컬 시간 구조체로 변환
    gmtime_r(&now, &gmtm);

    // 출력 (연도는 +1900, 월은 1부터 시작하기 때문에 +1)
    cout << (gmtm.tm_year + 1900) << "-";
    cout << (gmtm.tm_mon + 1 < 10 ? "0" : "") << (gmtm.tm_mon + 1) << "-";
    cout << (gmtm.tm_mday < 10 ? "0" : "") << gmtm.tm_mday << endl;
}