#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i: arr) {
        if (i>=50) {
            if(i%2==0)
                answer.push_back(i/2);
            else answer.push_back(i);
        }
        if(i<50) {
            if(i%2!=0) answer.push_back(i*2);
            else answer.push_back(i);
        }
    }
    return answer;
}