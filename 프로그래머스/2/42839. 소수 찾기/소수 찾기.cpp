#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    set<int> candidate;  // 중복 제거용

    sort(numbers.begin(), numbers.end());

    // 길이 1부터 numbers.size()까지 모든 조합 생성
    for (int i = 1; i <= numbers.size(); i++) {
        vector<bool> select(numbers.size(), false);
        fill(select.end() - i, select.end(), true);  // i개 선택

        do {
            string sub = "";
            for (int j = 0; j < numbers.size(); j++) {
                if (select[j]) sub += numbers[j];
            }

            // 해당 조합의 모든 순열을 생성
            sort(sub.begin(), sub.end());
            do {
                candidate.insert(stoi(sub));
            } while (next_permutation(sub.begin(), sub.end()));

        } while (next_permutation(select.begin(), select.end()));
    }

    int answer = 0;
    for (int num : candidate) {
        if (isPrime(num)) {
            answer++;
        }
    }

    return answer;
}
