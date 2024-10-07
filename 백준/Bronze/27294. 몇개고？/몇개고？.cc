#include <iostream>
using namespace std;

int main() {
    int hour;
    bool alcohol;

    cin >> hour >> alcohol;

    if (12 <= hour && hour <= 16) {
        if (alcohol) cout << "280";
        else cout << "320";
    }
    
    else cout << "280";
}