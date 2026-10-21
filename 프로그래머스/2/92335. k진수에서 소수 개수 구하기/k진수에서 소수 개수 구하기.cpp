#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool isSosu(string number) {
    long long num = stoll(number);
    if (num == 1) return false;
    for(int i=2; i*i<=num; i++) {
        if (num == 2) return true;
        if (num%i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string tmp = "";
    while(n>0) {
        tmp += to_string(n%k);
        n /= k;
    }
    reverse(tmp.begin(), tmp.end());
    
    string now = "";
    vector<string> sosu;
    for(int i=0; i<tmp.size(); i++) {
        if (tmp[i] == '0' && now!="") {
            sosu.push_back(now);
            now = "";
        } else if (tmp[i]!='0') {
            now += tmp[i];
        }
    }
    if (now.size() > 0) sosu.push_back(now);

    for(string i: sosu) {
        if (isSosu(i)) {
            answer++;
        }
    }
    
    return answer;
}