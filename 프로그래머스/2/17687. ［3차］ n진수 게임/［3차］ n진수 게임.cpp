#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "";
    string nums = "";
    for (int i = 0; nums.size() < m * t; i++) {   // 글자 수 기준으로 반복
        string tmp = "";
        if (i == 0) tmp = "0";
        int now = i;
        while (now > 0) {
            int d = now % n;
            if (d < 10) tmp += '0' + d;       
            else        tmp += 'A' + d - 10;  
            now /= n;
        }
        reverse(tmp.begin(), tmp.end());
        nums += tmp;
    }
    for (int k = 0; k < t; k++) {
        answer += nums[p - 1 + k * m];
    }
    
    return answer;
}