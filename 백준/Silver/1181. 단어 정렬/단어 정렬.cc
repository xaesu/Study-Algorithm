#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	string* arr = new string[N];

	// 입력
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int j;
	string temp;

	// 문자열 길이 순으로 정렬
	for (int i = 1; i < N; i++) {
		temp = arr[i];
		j = i - 1;

		// 길이가 같다면 사전 순으로 정렬
		while (j >= 0 && (temp.length() < arr[j].length() ||
				(temp.length() == arr[j].length() && temp < arr[j])))
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}

	// 정렬된 상태에서 앞의 요소와 중복인 지 체크 후 고유한 요소만 출력
	for (int i = 0; i < N; i++)
	{
		if (i == 0 || arr[i] != arr[i - 1])
			cout << arr[i] << '\n';
	}

	delete[] arr;
}