#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<int> tmp;
    for(int i=1; i<=n; i++) {
        bool flag = true;
        for(int j=2; j<i; j++) {
            if (i%j == 0) {
                flag = false;
                break;
            }
        }
        if (flag && i!=1) tmp.push_back(i);
    }
    
    for(int i=0; i<tmp.size(); i++) {
        if (n%tmp[i] == 0) answer.push_back(tmp[i]);
    }
    
    return answer;
}