#include <vector>

using namespace std;

class Soultion
{
public:
    // 倒着赋值就行了
    vector<int> getRow(int rowIndex)
    {
        vector<int> ret(rowIndex);
        for (int i = 0; i < rowIndex; i++)
        {
            ret[0] = ret[i] = 1;
            for (int j = i-1; j > 0; j--)
            {
                ret[j] = ret[j - 1] + ret[j];
            }
        }
        return ret;
    }
};