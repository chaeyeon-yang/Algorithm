#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double s = 0;
    for(int i: arr){
        s+=i;
    }
    answer = s/arr.size();
    return answer;
}