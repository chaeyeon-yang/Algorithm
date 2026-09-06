#include <string>
#include <map>
using namespace std;

int solution(string s) {
    map<string, int> mp = {{"zero",0}, {"one",1}, {"two",2}, {"three",3},
                           {"four",4}, {"five",5}, {"six",6},
                           {"seven",7}, {"eight",8}, {"nine",9}};

    string answer_tmp = "";
    string now = "";
    
    for (int idx = 0; idx < s.size(); idx++) {
        if (isdigit((unsigned char)s[idx])) {
            answer_tmp += s[idx];
        } else {
            now += s[idx];
            if (mp.count(now)) {         
                answer_tmp += to_string(mp[now]);
                now = "";
            }
        }
    }
    
    return stoi(answer_tmp);
}