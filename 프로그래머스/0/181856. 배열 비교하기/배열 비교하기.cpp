#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;

    if (arr1.size() != arr2.size()) {
        if (arr1.size() > arr2.size()) answer = 1;
        else answer = -1;
    } else {
        int s1 = 0;
        int s2 = 0;
        for(int i: arr1) {
            s1 += i;
        }
        for(int i: arr2) {
            s2 += i;
        }
        if (s1 == s2) answer = 0;
        if (s1 > s2) answer = 1;
        if (s1 < s2) answer = -1;
    }
    return answer;
}