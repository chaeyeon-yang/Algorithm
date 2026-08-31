#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.length() != 4 && s.length() !=6)
        return false;
       
    for(char c: s) {
        
        if (!isdigit(c)) {
            answer = false;
            break;
        }
    }
    
    
    return answer;
}