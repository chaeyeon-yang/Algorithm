#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int num = 0;
    int zero_cnt = 0;
    int cnt = 0;
    
    while(s != "1") {
        for(char c: s) {
            if (c == '1') {
                num++;
            } else {
                zero_cnt++;
            }
        }
        string tmp = "";
        while(num/2 > 0) {
            int mod = num%2;
            tmp += to_string(mod);
            num /= 2;
        }
        tmp += to_string(num);
        reverse(tmp.begin(), tmp.end());
        s = tmp;
        cnt++;
        num = 0;
    }
    answer.push_back(cnt);
    answer.push_back(zero_cnt);
    
    return answer;
}