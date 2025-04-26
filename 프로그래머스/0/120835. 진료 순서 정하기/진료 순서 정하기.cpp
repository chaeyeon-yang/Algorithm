#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> tmp = emergency;
    map<int, int> mp;
    sort(emergency.rbegin(), emergency.rend());
    
    int t = 1;
    for(int i: emergency){
        mp[i] = t;
        t++;
    }
    for(int i=0; i<tmp.size(); i++) {
        for (auto m: mp) {
            if (m.first == tmp[i]) {
                answer.push_back(m.second); 
                break;
            }
        }
    }
    
    return answer;
}