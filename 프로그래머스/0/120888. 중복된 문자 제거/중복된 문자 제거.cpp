#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string my_string) {
    string answer = "";
    map<char, int> mp;
    for(char c: my_string) {
        mp[c]++;
        if(mp[c] >= 2) continue;
        answer += c;
    }
    return answer;
}