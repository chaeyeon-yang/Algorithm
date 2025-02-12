#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int A, T, target;
  cin >> A >> T >> target; 

  int count = 0;  
  int person = 0; 
  int round = 1; 

  while (true) {
    for (int i = 0; i < 4; i++) {
      if ((i % 2) == target) count++; 
      if (count == T) {
        cout << person % A << endl;
        return 0;
      }
      person++;
  }

  for (int i = 0; i < round + 1; i++) {
    if (target == 0) count++; // "뻔"
    if (count == T) {
      cout << person % A << endl;
      return 0;
    }
    person++;
  }

  for (int i = 0; i < round + 1; i++) {
    if (target == 1) count++; // "데기"
    if (count == T) {
      cout << person % A << endl;
      return 0;
    }
    person++;
  }
  round++; 
  } 
}
