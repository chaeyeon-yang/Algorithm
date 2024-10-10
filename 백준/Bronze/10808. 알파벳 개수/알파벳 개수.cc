#include<bits/stdc++.h>
using namespace std;

string s;
int arr[29];
int main()
{
  cin >> s;
  for(char a:s) {
    arr[a-'a'] += 1;
  }

  for (int i = 0; i < 26; i++)
  {
    cout << arr[i] << " ";
  }
}