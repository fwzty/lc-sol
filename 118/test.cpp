#include "solution.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numRows = 5;
    Solution sol;
    vector<vector<int> > ans = sol.generate(numRows);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}