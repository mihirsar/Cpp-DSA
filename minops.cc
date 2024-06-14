#include <bits/stdc++.h>
using namespace std;
int minOps(vector<int> &nums)
{
    class Solution
    {
    public:
        int minOperations(vector<int> &nums)
        {
            int operations = 0;

            for (size_t i = 1; i < nums.size(); ++i)
            {
                if (nums[i] <= nums[i - 1])
                {
                    int needed_increments = nums[i - 1] - nums[i] + 1;
                    nums[i] += needed_increments;
                    operations += needed_increments;
                }
            }

            return operations;
        }
    };
}
int main()
{

    return 0;
}