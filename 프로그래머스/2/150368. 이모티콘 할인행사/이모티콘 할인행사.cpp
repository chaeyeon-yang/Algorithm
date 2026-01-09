#include <vector>
using namespace std;

vector<int> discount = {10, 20, 30, 40};
vector<int> selected;
int maxPlus = 0;
int maxSales = 0;

void dfs(int idx, vector<vector<int>>& users, vector<int>& emoticons) {
    if (idx == emoticons.size()) {
        int plus = 0;
        int sales = 0;

        for (auto& user : users) {
            int minDiscount = user[0];
            int maxPrice = user[1];

            int sum = 0;
            for (int i = 0; i < emoticons.size(); i++) {
                if (selected[i] >= minDiscount) {
                    sum += emoticons[i] * (100 - selected[i]) / 100;
                }
            }

            if (sum >= maxPrice) plus++;
            else sales += sum;
        }

        if (plus > maxPlus || (plus == maxPlus && sales > maxSales)) {
            maxPlus = plus;
            maxSales = sales;
        }
        return;
    }

    for (int d : discount) {
        selected.push_back(d);
        dfs(idx + 1, users, emoticons); // 10, 10, 20 // 10 30 
        selected.pop_back();
    }
}

vector<int> solution(vector<vector<int>> users, vector<int> emoticons) {
    dfs(0, users, emoticons);
    return {maxPlus, maxSales};
}
