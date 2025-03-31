#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    bool flag=true;
    for(int i=idx; i<arr.size(); i++) {
        if(arr[i] == 1) {
            flag=false;
            answer = i;
            break;
        }
    }
    if(flag) answer = -1;
    return answer;
}