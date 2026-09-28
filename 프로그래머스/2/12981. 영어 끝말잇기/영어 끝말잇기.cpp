#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0, 0};
    set<string> s;
    map<int, int> mp;
    for(int i=0; i<words.size(); i++) {
        int la = i>0 ? words[i-1].size()-1: 0;
        char st = i>0 ? words[i-1][la]:0;
        
        int person = (i+1)%n ==0 ? n : (i+1)%n;
        
        if (i>0 && words[i][0] != st) {
            answer[0] = person;
            answer[1] = mp[person]+1;
            break;
        }
        if (s.find(words[i]) != s.end()) {
            answer[0] = person;
            answer[1] = mp[person]+1;
            break;
        }
        mp[person]++;
        s.insert(words[i]);
    }

    return answer;
}