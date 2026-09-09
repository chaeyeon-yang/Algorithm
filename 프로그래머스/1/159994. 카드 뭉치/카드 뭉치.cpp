#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
     int i = 0, j = 0; // cards1, cards2 인덱스
    
    for (const string& word : goal) {
        if (i < cards1.size() && cards1[i] == word) {
            i++;
        } else if (j < cards2.size() && cards2[j] == word) {
            j++;
        } else {
            return "No";
        }
    }
    return "Yes";
}