#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string tmp = "";
    string pat_2 = "";
    for(char c: myString) {
        if(c<97) tmp += c+32;
        else tmp+=c;
    }
    for(char p: pat) {
        if(p<97) pat_2 += p+32;
        else pat_2+=p;
    }
    for(int i=0; i<tmp.size(); i++) {
        if (tmp.substr(i, pat_2.size()) == pat_2) answer = 1;
    }
    return answer;
}