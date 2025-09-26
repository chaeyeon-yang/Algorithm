#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    for(char c : s) {
        if (st.empty()) {
            if (c=='(') st.push(c);
            else {
                return false;
            }
        } else {
            if (c=='(') {
                if (st.top() == ')') st.pop();
                else st.push(c);
            } else {
                if (st.top() == '(') st.pop();
                else st.push(c);
            }
        }
    }
    answer = st.empty() ? true : false;

    return answer;
}