#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = p.length();
    for(int i=0; i<=t.size()-size; i++) {
        // cout << "a: " << stoi(t.substr(i, size)) << " " << 
        //         "b: "<< stoi(p) << "\n";
        if (stol(t.substr(i, size)) <= stol(p)) {
            
            answer++;
        }
    }
    return answer;
}