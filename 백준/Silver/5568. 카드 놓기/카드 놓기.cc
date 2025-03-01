#include<bits/stdc++.h>
using namespace std;
int n, k;
unordered_set<string> s;
vector<int> v;
vector<bool> used;

void backtrack(string num, int depth){ 
  if(k == depth){
    s.insert(num);
    return;
  }
  for(int i = 0; i < n; i++) { 
    if (!used[i]) {
      used[i] = true;
      backtrack(num + to_string(v[i]), depth + 1);
      used[i] = false;
    }
  }
  return; 
  }
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> k;
  v.resize(n);
  used.resize(n, false);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  backtrack("", 0);

  cout << s.size() << "\n";
  
  return 0;
}