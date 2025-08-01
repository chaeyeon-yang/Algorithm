#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    deque<char> dq;
    for(char c: s) {
        dq.push_back(c);
    }
    for(int i=0; i<s.size(); i++) {
        stack<char> st;
        for(char c: dq) {
            if (c == '[' || c == '(' || c=='{') 
                st.push(c);
            else {
                if (!st.empty()) {
                    if (c==']' && st.top() == '[')
                        st.pop();
                    else if (c==')' && st.top() == '(')
                        st.pop();
                    else if (c=='}' && st.top() == '{')
                        st.pop();
                    else 
                        st.push(c);
                } else {
                    st.push(c);
                }
            }
        }
        if(st.empty()) answer++;
        int tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }
    return answer;
}