#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {

    int answer = 0;
    map<int, int> mp;
    for(int i: tangerine) {
        mp[i]++;
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    
    int want_k = k;
    for(int i=0; i<v.size(); i++) {
        if (want_k <= 0) {
            break;
        }
        want_k -= v[i].second;
        answer++;
    }

    
    return answer;
}