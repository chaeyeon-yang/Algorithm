#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    long long answer = 0;
    string tmp = "";
    
    int real_n = n;
    stack<int> st;
    
    while(n/3 >= 3) {
        st.push(n%3);
        n /= 3;
    }
    st.push(n%3);
    if (real_n >= 3) {
        st.push(n/3);
    }
    
    
    while(!st.empty()) {
        tmp += to_string(st.top());
        st.pop();
    }
    reverse(tmp.begin(), tmp.end());

    int idx = tmp.size()-1;
    for(int i=0; i<tmp.size(); i++) {
        answer = answer + pow(3, idx) * (tmp[i]-'0');
        idx--;
    }
    
    
    return answer;
}