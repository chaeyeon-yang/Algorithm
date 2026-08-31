#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<pair<int, char>> v(s.length());
    
    
    for(char c : s) {
        v.push_back({c-'0', c});
    }
    sort(v.begin(), v.end(), [](pair<int, char> a, pair<int, char> b){if (a.first >= b.first) return a>b;});
    
    for(pair<int, char> n: v) {
        cout << n.second << " ";
        answer += string(1,n.second);
    }
    answer = answer.substr(0, s.size());
    return answer;
}