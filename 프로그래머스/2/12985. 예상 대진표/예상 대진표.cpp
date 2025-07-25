#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    while(a!=b) {
        int j=1;
        if (a==1 && b==2) {
            answer++;
            break;
        }
        for(int i=1; i<=n; i+=2) {
            if (i <= a && a <= i+1) {
                a=j;
            }
            if (i <= b && b <= i+1) {
                b=j;
            }
            j++;
        }
        n /= 2;
        answer++;
    }
    
    return answer;
}