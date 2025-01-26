#include<bits/stdc++.h>
using namespace std;
int n, k;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> k;
  vector<int> li;
  for (int i = 0; i < n; i++) {
    li.push_back(i+1);
  }
  vector<int> res;
  int idx = 0;
  while (!li.empty()) {
    idx = (idx + k - 1) % li.size(); 
    res.push_back(li[idx]);         
    li.erase(li.begin() + idx);  
  }
  cout << "<";
  for (int i = 0; i < n; i++) {
    if (i==n-1)
      cout << res[i] << ">";
    else 
      cout << res[i] << ", ";
  }
  return 0;
}