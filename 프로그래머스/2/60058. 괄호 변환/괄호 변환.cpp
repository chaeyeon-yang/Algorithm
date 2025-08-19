#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

bool isValid(string a) {
    stack<char> st;
    for(char c: a) {
        if (st.empty()) {
            st.push(c);
        } else {
            if (c == ')' && st.top() == '(') {
                st.pop();
            } else if (c == '(')
                st.push(c);
        }
    }
    if (st.empty()) return true;
    return false;
}

pair<string, string> divisionS(string a) {
    pair<string, string> p;
    int lcnt = 0, rcnt = 0;
    string u = "", v = "";
    for(int i=0; i<a.size(); i++) {
        if (lcnt && lcnt == rcnt) {
            v = a.substr(i);
            break;
        }
        else if (a[i]=='(') {
            lcnt++;
        }
        else if (a[i]==')') {
            rcnt++;
        }
        u += a[i];
    }
    p = {u, v};
    return p;
}

string make(string s) {
    if (s.empty()) return "";
    auto [u, v] = divisionS(s);
    if (isValid(u)) {
        return u + make(v);
    } else {
        string tmp = "(";
        tmp += make(v);
        tmp += ")";
        for(int i=1; i<u.size()-1; i++) {
            if (u[i] == '(') tmp += ')';
            else tmp += '(';
        }
        return tmp;
    }
}

string solution(string p) {
    if (isValid(p)) return p;
    return make(p);
}