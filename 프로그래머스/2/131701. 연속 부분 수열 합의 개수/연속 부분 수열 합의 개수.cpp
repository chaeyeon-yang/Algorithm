#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    // 1 1 4 7 9
    set<int> s;
    int n = elements.size();

    for(int i=0; i<elements.size(); i++) {
        for(int j=0; j<elements.size(); j++) {
            int tmp = 0;
            for(int a=j; a<j+i; a++) {
                tmp += elements[a%n];
            }
            s.insert(tmp);
        }
    }
    answer = s.size();
    return answer;
}