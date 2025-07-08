#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    sort(wallet.begin(), wallet.end());
    while(true) {
        int min_bill = *min_element(bill.begin(), bill.end());
        int max_bill = *max_element(bill.begin(), bill.end());
        if (min_bill > wallet[0] || max_bill > wallet[1]) {
            if(bill[0] > bill[1]) {
                bill[0] = bill[0]/2;
            } else {
                bill[1] = bill[1]/2;
            }
            answer++;
        } else break;
    }
    return answer;
}