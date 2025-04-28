#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> strNumbers;
    for (int num : numbers) {
        strNumbers.push_back(to_string(num));
    }
    
    sort(strNumbers.begin(), strNumbers.end(), compare);
    
    string answer = "";
    for (const string& s : strNumbers) {
        answer += s;
    }

    if (answer[0] == '0') {
        return "0";
    }

    return answer;
}
