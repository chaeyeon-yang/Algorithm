#include <string>
#include <iostream>
#include <map>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    map<char, int> mp;
    for(char c: s) {
        int tmp = tolower(c);
        if (tmp=='p')
            mp[tmp]++;
        if (tmp=='y') 
            mp[tmp]++;
    }
    
    if (mp['p'] != mp['y']) answer = false;
    if (mp['p'] == 0 && mp['y'] == 0) answer = true;


    return answer;
}