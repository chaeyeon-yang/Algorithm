#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <cctype>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    if (cacheSize == 0) return cities.size() * 5; 

    int answer = 0;
    deque<string> cache;

    for (string city : cities) { 
        for (char& c : city) c = tolower(c);

        auto it = find(cache.begin(), cache.end(), city);
        if (it != cache.end()) {           
            cache.erase(it);
            cache.push_back(city);      
            answer += 1;
        } else {                        
            if (cache.size() == cacheSize) cache.pop_front();
            cache.push_back(city);
            answer += 5;
        }
    }
    return answer;
}