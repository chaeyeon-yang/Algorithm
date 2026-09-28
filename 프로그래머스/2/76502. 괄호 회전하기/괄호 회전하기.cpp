#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <stack>

using namespace std;

bool isRight(const deque<char>& now) {
     stack<char> st;
     for (char c : now) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;   
            char t = st.top();
            if ((c == ')' && t == '(') ||
                (c == ']' && t == '[') ||
                (c == '}' && t == '{')) {
                st.pop();
            } else {
                return false;              
            }
        }
    }
    return st.empty();
}

int solution(string s) {
    int answer = 0;
    deque<char> q;
    for(char c: s) {
        q.push_back(c);
    }
    for(int i=0; i<s.size(); i++) {
        if (isRight(q)) answer++;
        char tmp = q.front();
        q.push_back(tmp);
        q.pop_front();
    }
    return answer;
}