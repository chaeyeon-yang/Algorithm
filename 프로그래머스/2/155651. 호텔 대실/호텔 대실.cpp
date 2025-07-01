#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int timeToMinutes(string t) {
    int hour = stoi(t.substr(0, 2));
    int minute = stoi(t.substr(3, 2));
    return hour * 60 + minute;
}

int solution(vector<vector<string>> book_time) {
    int answer = 0;
    vector<pair<int, int>> times;
    for (auto &bt : book_time) {
        int start = timeToMinutes(bt[0]);
        int end = timeToMinutes(bt[1]) + 10;
        times.push_back({start, end});
    }

    sort(times.begin(), times.end());
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto &t : times) {
        int start = t.first, end = t.second;

        if (!pq.empty() && pq.top() <= start) {
            pq.pop(); 
        }

        pq.push(end); 
    }

    return pq.size();
    return answer;
}