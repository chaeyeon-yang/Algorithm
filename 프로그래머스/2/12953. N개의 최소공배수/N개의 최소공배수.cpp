#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr) {
    int answer = *max_element(arr.begin(), arr.end());
    while(true) {
        bool flag = true;
        for(int i: arr) {
            if (answer%i != 0) {
                flag = false;
            }
        }
        if (flag) break;
        answer++;
    }
    return answer;
}