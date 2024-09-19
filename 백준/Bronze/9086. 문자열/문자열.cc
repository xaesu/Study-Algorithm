#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    string word;
    
    for (int i = 0; i < T; i++) {
        cin >> word;

        int len = word.length();
        cout << word[0] << word[len-1] << '\n';
    }
}