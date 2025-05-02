#include <string>
#include <vector>
#include <cstring>


using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> tmp;
    
    for(int i=0; i<num_list.size(); i++) {
        tmp.push_back(num_list[i]);
        if ((i+1)%n==0) {
            answer.push_back(tmp);
            tmp.clear();
        }
    }
    return answer;
}