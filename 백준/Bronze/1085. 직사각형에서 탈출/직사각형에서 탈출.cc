#include <iostream>
using namespace std;

int main() {
    int x(0), y(0), w(0), h(0);
    cin >> x  >> y >> w >> h;
    
    int a = (w - x) < (x - 0) ? (w - x) : (x - 0);
    int b = (h - y) < (y - 0) ? (h - y) : (y - 0);
    
    if (a > b) {
        if (b <= 0) cout << "0" << '\n';
        cout << b << '\n';
    }
    
    else {
        if (a <= 0) cout << "0" << '\n';
        cout << a << '\n';
    }
}