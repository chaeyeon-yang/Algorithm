#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++) {
        if (arr.size()%2 == 0) {
            if (i%2!=0) answer.push_back(arr[i]+n);
            else answer.push_back(arr[i]);
        } else {
            if (i%2==0) answer.push_back(arr[i]+n);
            else answer.push_back(arr[i]);
        }

    }
    return answer;
}