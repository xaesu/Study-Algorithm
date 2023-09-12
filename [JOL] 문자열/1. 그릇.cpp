#include <iostream>
using namespace std;

#include <string>

int main()
{
    string bowl;
    cin >> bowl;

    int s = 0, d = 0;

    for (int i = 1; i < bowl.length(); i++) {
        if (bowl[i] == bowl[i - 1]) s++;
        else d++;
    }

    cout << 10 + (5 * s) + (10 * d) << endl;
}