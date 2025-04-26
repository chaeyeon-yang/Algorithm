#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s) {
    stack<char> st;
    
    bool answer = true;
    for(char c: s) {
        if (c=='(') {
            if (!st.empty() && st.top()==')') st.pop();
            else st.push(c);
        } else {
            if (st.empty()) {
                st.push(c);
                break;
            }
            else {
                if (!st.empty() && st.top()=='(') st.pop();
                else st.push(c);
            }
        }
    }
    if(!st.empty()) answer = false;

    return answer;
}