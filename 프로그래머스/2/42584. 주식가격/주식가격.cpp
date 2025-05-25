#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n, 0);
    stack<int> s;
    
     for (int i = 0; i < n; ++i) {
        while (!s.empty() && prices[i] < prices[s.top()]) {
            int topIndex = s.top();
            s.pop();
            answer[topIndex] = i - topIndex;
        }
        s.push(i); 
    }
    
    while (!s.empty()) {
        int topIndex = s.top();
        s.pop();
        answer[topIndex] = n - 1 - topIndex;
    }
    
    return answer;
}