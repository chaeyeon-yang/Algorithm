#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int tmp = -1;
    for(int i=0; i<arr.size(); i++) {
        if (arr[i] == tmp) {
            continue;
        } else {
            answer.push_back(arr[i]);
            tmp = arr[i];
        }
    }

    return answer;
}