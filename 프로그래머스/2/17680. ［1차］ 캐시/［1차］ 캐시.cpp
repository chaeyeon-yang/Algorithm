#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    deque<string> q;
    int n = cities.size();
    if (cacheSize == 0) return n*5;
    for(string city: cities) {
        transform(city.begin(), city.end(), city.begin(), ::tolower);
        
        auto it = find(q.begin(), q.end(), city);
        if (it != q.end()) {
            answer += 1;
            q.erase(it);
            q.push_back(city);
        } else {
            if (q.size() >= cacheSize) {
                q.pop_front();
            }
            q.push_back(city);
            answer += 5;
        }
    }
    return answer;
}