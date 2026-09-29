#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i=0; i<priorities.size(); i++) {
        pq.push(priorities[i]);
        q.push({priorities[i], i});
    }
    while(!q.empty()){
        auto [pri, idx] = q.front();
        q.pop();

        if (pri == pq.top()) {          
            pq.pop();
            answer++;
            if (idx == location) return answer;
        } else {                        
            q.push({pri, idx});
        }
    }
   
    return answer;
}