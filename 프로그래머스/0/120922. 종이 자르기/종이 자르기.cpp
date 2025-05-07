#include <string>
#include <vector>

using namespace std;

int solution(int M, int N) {
    if (M==1 && N==1) return 0;
    else 
        return (M-1) + (N-1)*M;
}