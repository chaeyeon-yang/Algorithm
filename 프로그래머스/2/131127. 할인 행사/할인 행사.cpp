#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int end = 0;
    map<string, int> mp;
    for(int i=0; i<want.size(); i++) {
        mp.insert({want[i], number[i]});
    }
    
    while(end < discount.size()) {
        map<string, int> tmp;
        for(int i=end; i<end+10 && i<discount.size(); i++) {
            // cout << end << " : " << end+10 << "--- \n";
            for(auto& wa : mp) {
                if (wa.first == discount[i]) {
                    tmp[discount[i]]++;
                }
            }
        }
        bool flag = true;
        for(auto& wa : mp) {
            if (wa.second != tmp[wa.first]) {
                flag = false;
                break;
            }
        }
        if (flag) 
            answer++;
        end ++;
    }
    return answer;
}