#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());

    for (int i=0; i<citations.size(); i++) {
        int now = citations[i];
        int tmp = citations.size()-i;
        if (now >= tmp) {
            return tmp;
        }
    }
    return 0;
}