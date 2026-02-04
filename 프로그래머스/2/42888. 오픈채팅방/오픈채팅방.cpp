#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <iostream>

using namespace std;

// (E)uid1234, Muzi 
// (E)uid4567, Prodo
// (L) uid1234 
// (E) uid1234, Prodo 
// (C) uid4567, Ryan

// Muzi 들어옴 - Prodo
// Prodo 들어옴
// Muzi 나감 - Prodo
// Muzi 들어옴 - Prodo
// Prodo 이름 바꿈
vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<vector<string>> v;
    map<string, string> mp;
    for(int i=0; i<record.size(); i++) {
        string now = record[i];
        stringstream ss(now);
        string s;
        vector<string> tmp;
        while(ss >> s) {
            tmp.push_back(s);
        }
        if (tmp[0] == "Enter" || tmp[0] == "Change") {
            mp[tmp[1]] = tmp[2];
        }
        v.push_back(tmp);
    }
    for(int i=0; i<v.size(); i++) {
        vector<string> now = v[i];
        if (now[0] == "Enter") {
            answer.push_back(mp[now[1]]+"님이 들어왔습니다.");
        } else if (now[0] == "Leave") {
            answer.push_back(mp[now[1]]+"님이 나갔습니다.");
        } 
    }
    return answer;
}