#include <vector>
using namespace std;

class Solution
{
public:
    // 输出一共numRows行的杨辉三角
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > ret(numRows);
        for (int i = 0; i < numRows; i++) {
            ret[i].resize(i+1);
            ret[i][0] = ret[i][i] = 1;
            for (int j = 1; j < ret[i].size() - 1; j++)
            {
                ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
            }
        }
        return ret;
    }
};