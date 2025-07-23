#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;
    stack<char> st;
    for(char c: s) {
        int top = st.top();
        if (st.empty())
            st.push(c);
        else {
            if (top == c) st.pop();
            else {
                st.push(c);
            }
        }
    }
    if (st.empty()) answer = 1;
   
    return answer;
}