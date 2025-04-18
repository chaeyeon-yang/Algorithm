#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int hol = 0;
    int zzak = 0;
    for(int i: num_list) {
        if (i%2==0) zzak++;
        else hol++;
    }
    answer.push_back(zzak);
    answer.push_back(hol);
    return answer;
}