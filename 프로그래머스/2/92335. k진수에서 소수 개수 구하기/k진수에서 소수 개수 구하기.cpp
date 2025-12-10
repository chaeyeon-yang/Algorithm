#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

string convert_k(int n, int k) {
    string res = "";
    while (true) {
        if (n < k) {
            res = to_string(n) + res;
            break;
        }
        res = to_string(n % k) + res;
        n /= k;
    }
    return res;
}

bool isPrime(long long k) {
    if (k <= 1) return false;
    for (long long i = 2; i * i <= k; i++) {
        if (k % i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;
    string now = convert_k(n, k);

    string isSosu = "";
    vector<string> tmp;

    for (char c : now) {
        if (c == '0') {
            if (!isSosu.empty()) {
                tmp.push_back(isSosu);
                isSosu.clear();
            }
        } else {
            isSosu += c;
        }
    }
    if (!isSosu.empty()) tmp.push_back(isSosu);

    vector<long long> allnum;

    for(string s : tmp) { 
        long long this_cnt = 0;
        int len = s.size();

        for (int i = 0; i < len; i++) {
            int digit = s[i] - '0';
            long long mul = 1;

            for (int j = 0; j < len - 1 - i; j++) {
                mul *= 10;
            }

            this_cnt += digit * mul;
        }
        allnum.push_back(this_cnt);
    }

    for(long long num : allnum) {
        if (isPrime(num)) answer++; 
    }

    return answer;
}
