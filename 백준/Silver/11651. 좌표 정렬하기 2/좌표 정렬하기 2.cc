#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

struct Point {
    int x, y;
    bool operator<(const Point& other) const {
        return (y == other.y) ? (x < other.x) : (y < other.y);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<Point> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    sort(points.begin(), points.end());

    stringstream buffer;
    for (int i = 0; i < n; i++) {
        buffer << points[i].x << " " << points[i].y << '\n';
    }
    cout << buffer.str();
}
