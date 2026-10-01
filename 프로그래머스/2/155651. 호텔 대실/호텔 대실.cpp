#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int convertTime(string time) {
    return stoi(time.substr(0,2))*60 + stoi(time.substr(3,2));
}

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    vector<pair<int, int>> v;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(vector<string>& a : book_time) {
        v.push_back({convertTime(a[0]), convertTime(a[1])+10});
    }
    
    sort(v.begin(), v.end());
    
    for (auto& [st, en] : v) {
        if (!pq.empty() && pq.top() <= st) pq.pop();
        pq.push(en);
    }
    
    return pq.size();
}