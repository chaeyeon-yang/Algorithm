#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    map<int, string> mp = {{0, "THU"},{1, "FRI"}, {2, "SAT"}, {3, "SUN"}, {4, "MON"}, {5, "TUE"}, {6, "WED"}, {7, "THU"}};
    // 윤년은 2월이 29일까지 
    // 금 토 일 월 화 수 목
    
    // 31 29 31 30
    int cnt = 0;
    for(int i=0; i<a; i++) {
        cnt += arr[i];
    } 
    cnt += b;
    answer = mp[cnt%7];
    return answer;
}