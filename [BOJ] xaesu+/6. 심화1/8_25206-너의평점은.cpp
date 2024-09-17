#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float scoreByScore(string score);

class Grade {
public:
	string subject;
	float unit;
	float score;
};

int main() {
	vector<Grade> grade(20);

    // 입력
	string score;
	for (int i = 0; i < 20; i++) {
		cin >> grade[i].subject;
		cin >> grade[i].unit;
		cin >> score;
		grade[i].score = scoreByScore(score);
	}

    // 전공 평균 점수 계산
	float sumScore = 0, sumUnit = 0;
	for (int i = 0; i < 20; i++) {
		if (grade[i].score < 0.0) continue;
        
        sumUnit += grade[i].unit;
        sumScore += (grade[i].unit * grade[i].score);
	}

    float avg = sumScore / sumUnit;
    cout << fixed << setprecision(6);
    cout << avg;
}

// 등급을 과목 평점으로 치환
float scoreByScore(string score) {
    if (score == "A+")
        return 4.5;
    else if (score == "A0")
        return 4.0;
    else if (score == "B+")
        return 3.5;
    else if (score == "B0")
        return 3.0;
    else if (score == "C+")
        return 2.5;
    else if (score == "C0")
        return 2.0;
    else if (score == "D+")
        return 1.5;
    else if (score == "D0")
        return 1.0;
    else if (score == "F")
        return 0.0;
    else     // P일 때 합산 제외
        return -1;
}