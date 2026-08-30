#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int sm = arr[0];
    
    for(int i=0; i<arr.size(); i++) {
        if (arr[i] < sm) {
            sm = arr[i];
        }
    }
    for(int i: arr) {
        if (i != sm) {
            answer.push_back(i);
        }
    }
        
    if (arr.size() == 1) {
        answer.push_back(-1);
    }
    
    return answer;
}