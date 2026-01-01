#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int convertTime(string time) {
    return stoi(time.substr(0,2))*60 + stoi(time.substr(3,2));
}

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    vector<pair<int, int>> v;
    for(int i=0; i<book_time.size(); i++) {
        v.push_back({convertTime(book_time[i][0]), convertTime(book_time[i][1])+10});
    }
    sort(v.begin(), v.end());
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<v.size(); i++) {
        while (!pq.empty() && pq.top() <= v[i].first) {
            pq.pop();
            break;
        }
        pq.push(v[i].second);
    }
    
    answer = pq.size();
    
    return answer;
}