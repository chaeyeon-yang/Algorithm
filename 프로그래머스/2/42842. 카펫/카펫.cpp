#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    long long min_v = min(brown, yellow);
    
    for(long long i=1; i<=min_v; i++) {
        if (i+(yellow/(double)i) == (double)(brown-4)/2) {
            answer.push_back(i+2);
            answer.push_back(yellow/i+2);
            break;
        }
    }
    sort(answer.rbegin(), answer.rend());
    
    return answer;
}