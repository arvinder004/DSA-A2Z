#include <bits/stdc++.h>
using namespace std;

// using xor
int singleNonDUplicate(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans ^= nums[i];
    }
    return ans;
}

//optimal using binary search
int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return nums[0];

    if (nums[0] != nums[1])
        return nums[0];

    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}