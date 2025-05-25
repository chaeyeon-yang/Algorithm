#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int, int> mp;
    vector<pair<int, int>> v;
    set<int> s;
    
    for(int i=0; i<tangerine.size(); i++) {
        mp[tangerine[i]]++;
    }
    
    for(auto a: mp) {
        v.push_back({a.second, a.first});
    }
    
    sort(v.rbegin(), v.rend());
    
    int b=0;
    for(int i=0; i<k; i++) {
        if (b==k) break;
        for(int j=0; j<v[i].first; j++) {
            if (b==k) break;
            s.insert(v[i].second);
            b++;
        }
    }
    
    answer = s.size();
    
    return answer;
}