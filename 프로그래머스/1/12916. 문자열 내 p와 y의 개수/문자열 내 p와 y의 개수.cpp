#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int cnt_p = 0;
    int cnt_y = 0;
    for(char c: s) {
        if (c == 'p') cnt_p++;
        if (c == 'y') cnt_y++;
    }
    if(cnt_p != cnt_y) answer = false;

    return answer;
}