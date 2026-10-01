#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, int> mp;
    
    set<string> report_final;
    for(string s: report) {
        report_final.insert(s);
    }
    vector<string> final_v;
    for (string s: report_final) {
        final_v.push_back(s);
    }
    for(int i=0; i<final_v.size(); i++) {
        stringstream ss(final_v[i]);
        string now = "";
        int idx = 0;
        while(ss >> now) {
            idx++;
            if (idx == 2) {
                mp[now]++;
            }
        }
    }
    
    map<string, int> mail;
    for(int i=0; i<final_v.size(); i++) {
        stringstream ss(final_v[i]);
        string now = "";
        int idx = 0;
        string user = "";
        while(ss >> now) {
            idx++;
            if (idx == 1) {
                user = now;
            }
            if (idx == 2 && mp[now] >=k) {
                mail[user]++;
            }
        }
    }
    
    for(int i=0; i<id_list.size(); i++) {
        if (mail.find(id_list[i])!=mail.end())
        answer.push_back(mail[id_list[i]]);
        else answer.push_back(0);
    }
    return answer;
}