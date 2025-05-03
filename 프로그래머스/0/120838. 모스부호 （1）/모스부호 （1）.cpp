#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";
    string morse[26] = { 
        ".-","-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..",
        "--","-.","---",".--.","--.-",".-.",
        "...","-","..-","...-",".--","-..-",
        "-.--","--.."
    };
    
    map<string, int> mp;
    int i=0;
    for(string s: morse) {
        mp[s] = 97+i;
        i++;
    }
    string tmp = "";
    for(char c: letter) {
        if (c!=' ') {
            tmp += c;
        }
        if (c==' ') {
            answer += mp[tmp];
            tmp = "";
        }
    }
    if (tmp!="") answer += mp[tmp];
    
    return answer;
}