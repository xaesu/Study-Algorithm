#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <int> x;
    vector <int> y;

    int n(0), a(0), b(0);
    cin >> n;

    if (n <= 1) {
        cin >> a >> b;
        cout << "0";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int sqX(0), sqY(0);
    sqX = x[x.size() - 1] - x[0];
    sqY = y[y.size() - 1] - y[0];

    cout << sqX * sqY;
}