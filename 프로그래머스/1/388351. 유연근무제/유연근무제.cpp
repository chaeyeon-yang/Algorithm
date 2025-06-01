#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    vector<int> goodtime;
    for(int i=0; i<schedules.size(); i++) {
        if (schedules[i]%100 + 10 >= 60) {
            int tmp = schedules[i]/100+1;
            int bun = (schedules[i]%100 + 10)%60;
            goodtime.push_back(tmp*100+bun);
        } else 
            goodtime.push_back(schedules[i]+10);
    }
    
    for(int i=0; i<timelogs.size(); i++) {
        vector<int> now = timelogs[i];
        int check = 0;
        for(int j=0; j<now.size(); j++) {
            if ((j+startday)%7 == 6 || (j+startday)%7 == 0) 
                continue;
            if (now[j] <= goodtime[i]) {
                check++;
            }
                
        }
        if (check == 5) answer++;
    }
    return answer;
}