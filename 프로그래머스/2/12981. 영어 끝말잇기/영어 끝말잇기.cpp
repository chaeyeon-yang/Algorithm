#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

string en, st;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string, int> mp;
    map<int, int> order;
    pair<int, int> res;
    
    for(int i=0; i<words.size(); i++) {
        int person = (i+1)%n == 0? n : (i+1)%n;
        order[person]++;
        if(i>0)
            st = words[i].front();
        
        if(st != en) {
            res.first = person;
            res.second = order[person];
            break;
        }

        if (mp[words[i]] == 0) {
            mp[words[i]]++;
        } else {
            res.first = person;
            res.second = order[person];
            break;
        }
        en = words[i][words[i].size() - 1];
        
    }
    answer.push_back(res.first);
    answer.push_back(res.second);

    return answer;
}