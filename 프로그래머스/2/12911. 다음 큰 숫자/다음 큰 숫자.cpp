#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int numTo2(int num) {
    vector<int> v;
    int cnt = 0;
    while (num/2 > 0) {
        v.push_back(num%2);
        num /= 2;
    }
    v.push_back(num);
    reverse(v.begin(), v.end());
    
    for(int i: v) {
        if (i == 1) cnt++;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int n_cnt = numTo2(n);
    for(int i = n+1; ; i++) {
        if (numTo2(i) == n_cnt) {
            return i;
        }
    }
    
    return answer;
}