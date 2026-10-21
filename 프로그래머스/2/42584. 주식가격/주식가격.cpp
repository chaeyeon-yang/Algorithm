#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> st;   // 아직 가격이 안 떨어진 시점의 인덱스

    for (int i = 0; i < n; i++) {
        // 지금 가격이 더 낮으면 → 그 시점들은 여기서 떨어짐
        while (!st.empty() && prices[st.top()] > prices[i]) {
            answer[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }

    // 끝까지 안 떨어진 시점들
    while (!st.empty()) {
        answer[st.top()] = n - 1 - st.top();
        st.pop();
    }
    return answer;
}