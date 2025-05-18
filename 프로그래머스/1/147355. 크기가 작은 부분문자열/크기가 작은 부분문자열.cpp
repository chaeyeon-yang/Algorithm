#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int ss = t.size()-p.size();
    for(int i=0; i<=ss; i++) {
        string now = t.substr(i, p.size());
        if (stoll(now) <= stoll(p)) answer++;
    }
    return answer;
}