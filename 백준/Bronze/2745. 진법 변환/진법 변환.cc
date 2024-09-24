#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string B;
    int N;
    cin >> B >> N;

    int sum = 0, len = B.size();
    for (int i = 0; i < len; i++)
    {
        int temp = B[len - (i + 1)];
        if ('0' <= temp && temp <= '9')
            temp = temp - '0';
        else
            temp = temp + 10 - 'A';
        sum += (temp * (int)pow(N, i));
    }
    cout << sum << '\n';

    return 0;
}