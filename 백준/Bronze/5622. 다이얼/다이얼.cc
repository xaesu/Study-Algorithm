#include <iostream>
#include <string>
using namespace std;

int durateTime (char ch);

int main() {
  string word;
  cin >> word;

  int len = word.length();
  int sum = 0;

  for (int i = 0; i < len; i++) {
    sum += durateTime(word[i]);
  }

  cout << sum;
}

// 지속 시간 측정
int durateTime (char ch) {
  int time = 2;

  switch (ch) {
    case ('A'):
    case ('B'):
    case ('C'):
      time += 1;
      return time;
    case ('D'):
    case ('E'):
    case ('F'):
      time += 2;
      return time;
    case ('G'):
    case ('H'):
    case ('I'):
      time += 3;
      return time;
    case ('J'):
    case ('K'):
    case ('L'):
      time += 4;
      return time;
    case ('M'):
    case ('N'):
    case ('O'):
      time += 5;
      return time;
    case ('P'):
    case ('Q'):
    case ('R'):
    case ('S'):
      time += 6;
      return time;
    case ('T'):
    case ('U'):
    case ('V'):
      time += 7;
      return time;
    case ('W'):
    case ('X'):
    case ('Y'):
    case ('Z'):
      time += 8;
      return time;
    default:
    return 0;
  }
}