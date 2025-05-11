#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

struct cmp {
    bool operator()(pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first) 
            return a.second > b.second;
        return a.first > b.first;
    }
};

int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    for(int i=0; i<priorities.size(); i++) {
        pq.push({priorities[i], i});
    }
    return answer;
}