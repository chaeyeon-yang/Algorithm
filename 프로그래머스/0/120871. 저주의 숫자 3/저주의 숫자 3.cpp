#include <string>
#include <vector>

using namespace std;

// 숫자에 '3'이 포함되어 있거나 3의 배수이면 true
bool hasThreeOrMultipleOfThree(int num) {
    if (num % 3 == 0) return true;
    string s = to_string(num);
    return s.find('3') != string::npos;
}

int solution(int n) {
    int cnt = 0;
    int i = 1;
    while (cnt < n) {
        if (!hasThreeOrMultipleOfThree(i)) {
            cnt++;
        }
        i++;
    }
    return i - 1;
}
