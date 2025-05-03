#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int ma = -1;
    int in = -1;
    for(int i=0; i<array.size(); i++) {
        if (array[i] > ma) {
            ma = array[i];
            in = i;
        }
    }
    answer.push_back(ma);
    answer.push_back(in);
    
    return answer;
}