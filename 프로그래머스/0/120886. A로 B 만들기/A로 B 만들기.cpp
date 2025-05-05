#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    map<char, int> mp;
    map<char, int> mp2;
    bool flag = true;
    for(char c: before) {
        mp[c]++;
    }
    for(char c: after) {
        mp2[c]++;
    }
    for(char k = 'a'; k <= 'z'; k++) {
        if(mp[k] != mp2[k]) {
            flag = false;
            break;
        }
    }
    if(flag) answer = 1;
    return answer;
}