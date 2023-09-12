#include <iostream>
using namespace std;

#include <string>

int main() {
    string str;
    cin >> str;

    string A = "KOI", B = "IOI";
    int Acnt = 0, Bcnt = 0;
    
    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == 'K' && str[i + 1] == 'O' && str[i + 2] == 'I') Acnt++;
        if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') Bcnt++;
    }

    cout << Acnt << endl << Bcnt << endl;
}