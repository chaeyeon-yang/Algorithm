#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
  while(scanf("%d", &n) != EOF) {
    int cnt = 1, res = 1;
    while(true) {
      if(cnt%n==0) {
        printf("%d\n", res);
        break;
      }else{
        cnt = (cnt * 10) + 1;
        cnt %= n;
        res++;
      }
    }
  }
  return 0;
}