#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll convertMin(string s) {
    ll hour = stoll(s.substr(0, 2));
    ll min = stoll(s.substr(3,2));
    return min + hour*60;
}

bool cmp(const vector<string>& a, const vector<string>& b) {
    return stoll(a[1]) < stoll(b[1]);
}

vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;
    stack<pair<string, ll>> remain;
    for(int i=0; i<plans.size(); i++) {
        plans[i][1] = to_string(convertMin(plans[i][1]));
    }
    
    sort(plans.begin(), plans.end(), cmp);
    
    for (int i = 0; i < plans.size() - 1; i++) {
    ll curTime = stoll(plans[i][1]);
    ll nextTime = stoll(plans[i+1][1]);
    ll duration = stoll(plans[i][2]);
    ll available = nextTime - curTime;

    if (duration > available) {
        remain.push({plans[i][0], duration - available});
    } else {
        answer.push_back(plans[i][0]);
        ll extra = available - duration;

        while (extra > 0 && !remain.empty()) {
            auto [name, t] = remain.top();
            remain.pop();

            if (t > extra) {
                remain.push({name, t - extra});
                extra = 0;
            } else {
                answer.push_back(name);
                extra -= t;
            }
            }
        }
    }

    answer.push_back(plans[plans.size()-1][0]);
        
    
    while(!remain.empty()) {
        auto a = remain.top();
        remain.pop();
        answer.push_back(a.first);
    }
    
    return answer;
}