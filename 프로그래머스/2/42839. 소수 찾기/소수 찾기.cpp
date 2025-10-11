#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

set<int> s;

bool isPrime(int x) {
    if (x < 2) return false;
    bool flag = true;
    for(int i=2; i*i<=x; i++) {
        if (x%i == 0)
            flag = false;
    }
    return flag;
}

void dfs(string numbers, string current, vector<bool>& visited) {
    if (!current.empty()) {
        s.insert(stoi(current));
    }

    for (int i = 0; i < numbers.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(numbers, current + numbers[i], visited);
            visited[i] = false;
        }
    }
}

int solution(string numbers) {
    vector<bool> visited(numbers.size(), false);
    dfs(numbers, "", visited);
    int answer = 0;
    for (int num : s) {
        if (isPrime(num)) answer++;
    }
    return answer;
}