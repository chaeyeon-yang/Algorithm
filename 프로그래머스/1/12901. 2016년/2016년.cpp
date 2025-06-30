#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 윤년!!
// 31 29 31 30 31 30 31 30 31 30 31 30
// 금 토 일 월 화 수 목 
string solution(int a, int b) {
    string answer = "";
    vector<string> wee = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> days = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int s = 0;

    for(int i=0; i<a-1; i++) {
        s += days[i];
    }
    s += b;
    answer = wee[(s+6)%7];
   
    return answer;
}