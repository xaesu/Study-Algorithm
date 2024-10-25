#include <iostream>
using namespace std;

int main(){
    int n, cnt(0);
    cin >> n;
    
    int x;
    for(int i = 0; i < 5; i++){
        cin >> x;
        if(x == n) cnt++;
    }
    
    cout << cnt;
}