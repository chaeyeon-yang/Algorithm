#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> s;
    for(int i=0; i<elements.size(); i++) {
        int sum = 0;
        for(int j=i; j<i+elements.size(); j++) {
            int idx = j % elements.size();
            sum += elements[idx];
            s.insert(sum);
        }
    }
    answer = s.size();
    return answer;
}