#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    vector<int> tmp;
    for(int i=0; i<arr.size(); i++) {
        bool del = false;
        for(int j=0; j<delete_list.size(); j++) {
            if (arr[i] == delete_list[j]) {
                del = true;
                break;
            }
        }
        if (del) tmp.push_back(arr[i]);
    }
    for(int i: arr) {
        int check = false;
        for (int j: tmp) {
            if (i == j) check = true;
        }
        if (!check) answer.push_back(i);
    }
    return answer;
}