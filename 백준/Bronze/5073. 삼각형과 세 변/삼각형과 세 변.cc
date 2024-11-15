#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    while (1) {
        cin >> a >> b >> c;
        if (!a && !b && !c)
            return 0;

        int arr[3] = { a, b, c };
        sort(arr, arr + 3);

        if (arr[2] >= arr[0] + arr[1]) {
            cout << "Invalid" << '\n';
        }
        else if (arr[0] == arr[1] && arr[1] == arr[2]) {
            cout << "Equilateral" << '\n';
        }
        else if (arr[0] == arr[1] || arr[1] == arr[2]) {
            cout << "Isosceles" << '\n';
        }
        else {
            cout << "Scalene" << '\n';
        }
    }
}
