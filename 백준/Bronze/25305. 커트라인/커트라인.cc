#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    vector<int> score(N);

    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    sort(score.begin(), score.end(), greater<>());
    cout << score[k - 1];
}
