#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> numbers) {
    int n = numbers.size();
    vector<int> answer(n, -1);   // 기본값 -1로 시작
    stack<int> st;               // 인덱스를 저장

    for (int i = 0; i < n; i++) {
        while (!st.empty() && numbers[st.top()] < numbers[i]) {
            answer[st.top()] = numbers[i];
            st.pop();
        }
        st.push(i);
    }
    return answer;
}