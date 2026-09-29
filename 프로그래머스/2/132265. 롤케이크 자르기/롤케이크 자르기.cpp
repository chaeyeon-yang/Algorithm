#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    int n = topping.size();
    vector<int> cnt1(n);
    vector<int> cnt2(n);
    set<int> s1;
    set<int> s2;

    int tmp1 = 0, tmp2 = 0;
    for (int i = 0; i < n; i++) {
        if (s1.find(topping[i]) == s1.end()) {
            tmp1++;
        }
        cnt1[i] = tmp1;
        s1.insert(topping[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s2.find(topping[i]) == s2.end()) {
            tmp2++;
        }
        cnt2[i] = tmp2;
        s2.insert(topping[i]);
    }

    for (int i = 0; i + 1 < n; i++) {
        if (cnt1[i] == cnt2[i + 1]) {
            answer++;
        }
    }
    return answer;
}