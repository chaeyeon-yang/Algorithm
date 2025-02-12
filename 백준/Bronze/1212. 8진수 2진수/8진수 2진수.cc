#include <bits/stdc++.h>
using namespace std;

int main() {
    string octal;
    cin >> octal;

    string binary[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};

    // 첫 숫자는 앞의 '0'을 제거해야 하므로 예외 처리
    cout << stoi(binary[octal[0] - '0']);  

    // 나머지 숫자는 그대로 변환
    for (int i = 1; i < octal.length(); i++) {
      cout << binary[octal[i] - '0'];
    }

    cout << "\n";
    return 0;
}