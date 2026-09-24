#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<pair<int,int>> v;
    map<int, int> mp;
    for(int i: tangerine) {
        mp[i]++;
    }
    for(auto a: mp) {
        v.push_back({a.first, a.second});
    }
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second >= b.second) return a.second > b.second;
        return a.second > b.second;;
    });
    
    int sum = 0;
    for (auto& p : v) {
        sum += p.second;
        answer++;
        if (sum >= k) break;
    }
    return answer;
}