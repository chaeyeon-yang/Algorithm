#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i=0; i<babbling.size(); i++) {
        string now = babbling[i];
        while(true) {
            if(now == "") {
                answer++;
                cout << now <<" 는 통과!! ";
                break;
            }
            if(now.substr(0, 2) == "ye" || now.substr(0, 2) == "ma") {
                if(now == "") answer++;
                now = now.substr(2);
            }
            else if(now.substr(0, 3) == "aya" || now.substr(0, 3) == "woo") {
                if(now == "") answer++;
                now = now.substr(3);
            } else break;
        }
    }
    return answer;
}