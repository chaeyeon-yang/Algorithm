#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 1;
    while(n!=1) {
        if (n%2!=0) {
            ans++;
            n-=1;
        } else {
            n/=2;
        }
    }

    return ans;
}