#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> mp;
    for(string p: participant) {
        mp[p]++;
    }
    for(string c: completion) {
        mp[c]--;
    }
    
    for(auto a: mp) {
        if (a.second > 0) answer = a.first;
    }
    
    return answer;
}