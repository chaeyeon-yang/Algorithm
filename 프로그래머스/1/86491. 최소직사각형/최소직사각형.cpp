#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 1;
    vector<vector<int>> tmp;
    for(int i=0; i<sizes.size(); i++) {
        vector<int> now = sizes[i];
        if (now[0] < now[1]) {
            tmp.push_back({now[1], now[0]});
        } else {
            tmp.push_back({now[0], now[1]});
        }
    }
    
    
    sort(tmp.begin(), tmp.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0]) return a[1] > b[1];
        return a[0] > b[0];
    });
    
    int sero = 0;
    for(int i=0; i<tmp.size(); i++) {
        sero = max(sero, tmp[i][1]);
    }
    
    answer = sero*tmp[0][0];
        
    return answer;
}