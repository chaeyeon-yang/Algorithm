#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<vector<pair<int, int>>> graph;
vector<int> dist;

void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int cost = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        for (auto [next, nextCost] : graph[cur]) {
            if (dist[next] > cost + nextCost) {
                dist[next] = cost + nextCost;
                pq.push({dist[next], next});
            }
        }
    }
}

int solution(int N, vector<vector<int>> road, int K) {
    graph.resize(N + 1); 
    dist.assign(N + 1, 2e9);

    for (auto r : road) {
        int u = r[0], v = r[1], c = r[2];
        graph[u].emplace_back(v, c); 
        graph[v].emplace_back(u, c);
    }

    dijkstra(1); 

    int answer = 0;
    for (int i = 1; i <= N; i++)
        if (dist[i] <= K) answer++; 

    return answer;
}
