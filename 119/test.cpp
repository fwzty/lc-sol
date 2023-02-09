#include "solution.cpp"
#include <iostream>

int main() {
    int row = 5;
    Soultion sol;
    vector<int> ans = sol.getRow(row);
    for (int x: ans) {
        cout << x << ' ';
    }
}