#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    // 할인하는 제품은 하루 하나씩만
    // 원하는 제품과 수량이 할인하는 날짜와 10일 연속으로 일치
    
    map<string, int> mp;
    
    for(int i=0; i<want.size(); i++) {
        mp[want[i]] = number[i];
    }
    
    for(int i=0; i<discount.size(); i++) {
        map<string, int> tmp;
        for(int j=i; j<i+10 && j<discount.size(); j++) {
            tmp[discount[j]]++;
        }
        bool flag = true;
        
        for(auto a: mp) {
            if (tmp.contains(a.first)) {
                if (tmp[a.first] != a.second) {
                    flag = false;
                    break;
                }
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            answer++;
        }
    }
    return answer;
}