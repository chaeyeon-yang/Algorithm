#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> mp;
    for(int i=0; i<clothes.size(); i++) {
        vector<string> tmp = clothes[i];
        mp[tmp[1]]++;
    }
    int cnt = 1;
    for(auto a: mp) {
        cnt *= (a.second+1);
    }
    answer = cnt-1;
    
    return answer;
}