#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string, int> mp;
    for(int i=0; i<genres.size(); i++) {
        mp[genres[i]] += plays[i];
    }
    
    vector<pair<string, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), [](pair<string, int>& a, pair<string, int>& b) {
        return a.second > b.second;
    });
    
    for(pair<string, int> p: vec) {
        string now = p.first;
        vector<pair<int, int>> tmp;
        for(int i=0; i<genres.size(); i++) {
            if (genres[i] == now) {
                tmp.push_back({plays[i], i});
            }
        }
        sort(tmp.begin(), tmp.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first > b.first;
        });
        int cnt = 0;
        for(pair<int, int> n: tmp) {
            if (cnt == 2) break;
            answer.push_back(n.second);
            cnt++;
        }
    }
    

    return answer;
}