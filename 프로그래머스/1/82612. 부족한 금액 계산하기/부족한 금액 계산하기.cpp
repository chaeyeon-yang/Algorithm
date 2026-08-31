#include <cmath>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long charge = 0;
    for(int i=1; i<=count; i++) {
        charge += i*price;
    }
    if (money - charge >= 0) answer = 0;
    else answer = abs(charge-money);
    return answer;
}