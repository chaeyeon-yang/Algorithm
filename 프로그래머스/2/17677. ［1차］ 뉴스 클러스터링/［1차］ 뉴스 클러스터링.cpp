#include <string>
#include <iostream>
#include <cmath>
#include <set>
#include <map>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    map<string, int> mp_a;
    map<string, int> mp_b;
    
    int same_area = 0;
    int all_area = 0;
    
    for(int i=0; i<str1.size(); i++) {
        string tmp = "";
        for(int j=i; j<i+2; j++) {
            if (tolower(str1[j]) < 97 || tolower(str1[j]) > 123) continue;
            tmp += tolower(str1[j]);
        }
        if (tmp.size() != 2) continue;
        mp_a[tmp]++;
    }
    for(int i=0; i<str2.size(); i++) {
        string tmp = "";
        for(int j=i; j<i+2; j++) {
            if (tolower(str2[j]) < 97 || tolower(str2[j]) > 123) continue;
            tmp += tolower(str2[j]);
        }
        if (tmp.size() != 2) continue;
        mp_b[tmp]++;
    }
    set<string> ss;
    for(auto& a: mp_a) {
        for(int i=0; i<a.second; i++) {
            cout << a.first << " ";
        }
        ss.insert(a.first);
    }
    for(auto& a: mp_b) {
        for(int i=0; i<a.second; i++) {
            cout << a.first << " ";
        }
        ss.insert(a.first);
    }
    for(string now : ss) {
        same_area += min(mp_a[now], mp_b[now]);
        all_area += max(mp_a[now], mp_b[now]);
    }
    
    double simil = 0;
    
    if (mp_a.empty() && mp_b.empty()) simil = 1;
    else {
        simil = same_area / (double)all_area;
    }
    
    answer = (int)(simil*65536);
    
    return answer;
}