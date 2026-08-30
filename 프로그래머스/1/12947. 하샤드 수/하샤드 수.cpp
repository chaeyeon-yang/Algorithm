#include <string>
#include <vector>
#include <numeric>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string tmp = to_string(x);
    vector<int> v(tmp.size());
    
    for(char c: tmp) {
        v.push_back(c-'0');
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    if (x%sum != 0) answer = false;
    
    return answer;
}