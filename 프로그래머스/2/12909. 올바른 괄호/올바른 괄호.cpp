#include<string>
#include <iostream>
#include <vector>


using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> st;
    for (char c: s) {
        if (c=='(') {
            st.push_back(c);
        }
        if (c==')') {
            if (st.size()>0) st.pop_back();
            else {
                st.push_back(c);
                break;
            }
        }
    }
    if (st.size()) answer=false;

    return answer;
}