#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> coordinate(n);

    for (int i = 0; i < n; i++) {
        cin >> coordinate[i].first >> coordinate[i].second;
    }

    sort(coordinate.begin(), coordinate.end());

    for (int i = 0; i < n; i++) {
        cout << coordinate[i].first << " " << coordinate[i].second << "\n";
    }
}
