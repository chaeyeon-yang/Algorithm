#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int,double>> v;
    for(int i=1; i<=N; i++) {
        int now_stage = i;
        int entire_user = 0;
        int current_user = 0;
        for(int j=0; j<stages.size(); j++) {
            if (stages[j]==now_stage) {
                current_user++;
                entire_user++;
            }
            else if (stages[j] >= now_stage) {
                entire_user++;
            } 
        }
        // 0으로 나누는 경우의 수 
        double fail_rate = (entire_user == 0) ? 0.0 : (double)current_user / entire_user;
        v.push_back(make_pair(now_stage, fail_rate));
        // cout << now_stage << " 스테이지 " << (double)current_user / entire_user << " \n";
    }
    
    sort(v.begin(), v.end(), [](pair<int, double>& a, pair<int, double>& b) {
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });
    
    for(auto a : v) {
        answer.push_back(a.first);
    }
        
    return answer;
}