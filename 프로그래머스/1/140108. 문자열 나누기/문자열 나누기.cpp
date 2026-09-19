#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<string> v;
    string tmp = string(1, s[0]);
    
    char x = s[0];
    
    int x_cnt = 1;
    int other_cnt = 0;
    
    for (int i=1; i<s.size(); i++) {
        if (x_cnt == 0 && other_cnt ==0) {
            x = s[i];
        }
        if (s[i] == x) {
            x_cnt++;
        } else if (s[i]!=x) {
            other_cnt++;
        }
        tmp += s[i];
        if (x_cnt == other_cnt) {
            x_cnt = other_cnt = 0;
            v.push_back(tmp);
            tmp = "";
        }
    }
    answer = v.size();
    if (tmp!="") answer++;
    return answer;
}