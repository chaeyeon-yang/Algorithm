#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> need;
    for(int i=0; i<want.size(); i++) {
        need[want[i]] = number[i];
    }
    
    
    for(int i=0; i+10<=discount.size(); i++) {
        map<string, int> mp = need;
        int cnt = 0;
        for(int j=i; j<i+10; j++) {
            auto it = mp.find(discount[j]);
            if (it != mp.end()) {
                mp[discount[j]]--;
            };
        }
        bool flag = true;
        for(auto& s: mp) {
            if (s.second != 0) {
                flag = false;
                break;
            }
        }

        if (flag) answer++;
    }
    return answer;
}