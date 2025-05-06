#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> mp;
    for(char c: s) {
        mp[c]++;
    }
    for(auto a: mp) {
        if (a.second == 1) answer += a.first;
    }
    sort(answer.begin(), answer.end());
    return answer;
}