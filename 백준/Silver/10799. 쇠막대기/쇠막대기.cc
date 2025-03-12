#include<iostream>
#include<stack>
using namespace std;

stack<char> st;
string s;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else if(s[i]==')' and s[i-1]=='('){ // 레이저일때
			st.pop();
			cnt += st.size();
		}
		else {
			cnt++;
			st.pop();
		}
	}
	cout << cnt << endl;

  return 0;
}