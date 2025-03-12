#include<stack>
#include<iostream>
#include<cmath>
#include<iomanip> 

using namespace std;
int n, num;
string s;
stack<double> st;
int arr[26];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> s;
  
  for (int i = 0; i < n; i++) {
    cin >> num;
    arr[i] = num;
  }
  for (char i:s) {
    if ('A' <= i && i <= 'Z') {
      st.push(arr[i-'A']);
    } else {
      if(!st.empty()) {
        double tmp2 = st.top();
        st.pop();
        double tmp = st.top();
        st.pop();
        if (i == '+') st.push(tmp + tmp2);
        else if (i == '-') st.push(tmp - tmp2);
        else if (i == '*') st.push(tmp * tmp2);
        else if (i == '/') st.push(tmp / tmp2);
      }
    }
  }

  cout << fixed << setprecision(2) << st.top() << "\n";
  return 0;
}