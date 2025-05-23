#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<int> v(n, 1);
    
    for(int i=0; i<section.size(); i++) {
        int now = section[i]-1;
        v[now] = 0;
    }
    
    for(int i=0; i<section.size(); i++) {
        int now = section[i]-1;
        // cout << "현재 위치 : " << now << "\n";
        if (v[now] == 1) continue;
        else {
            if (now+m < n) {
                // cout << now <<" 부터 " << now+m-1 << "까지 색칠\n";
                for(int i=now; i<now+m; i++) {
                    v[i] = 1;
                }
                answer++;
            }
        }
    }
    int tmp = 0;
    for(int i: v) {
        if (i==0) tmp++;
    }
    if (tmp>0 && tmp<=m) answer++;
    
    return answer;
}