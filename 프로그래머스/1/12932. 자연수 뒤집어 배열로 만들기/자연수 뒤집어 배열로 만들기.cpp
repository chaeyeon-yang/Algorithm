#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    string tmp = to_string(n);
    reverse(tmp.rbegin(), tmp.rend());
    
    vector<int> answer;
    
    for(char c: tmp) {
        answer.push_back(c-'0');
    }
    
    return answer;
}