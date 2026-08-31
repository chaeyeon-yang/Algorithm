#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i=0; i<arr1.size(); i++) {
        vector<int> now1 = arr1[i];
        vector<int> now2 = arr2[i];
        vector<int> tmp;
        for(int j=0; j<now1.size(); j++) {
            tmp.push_back(now1[j]+now2[j]);
        }
        answer.push_back(tmp);
    }
    return answer;
}