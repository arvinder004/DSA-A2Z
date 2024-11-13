#include <bits/stdc++.h>
using namespace std;

int search_rotated(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + high / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {5, 6, 8, 1, 2, 3, 4};
    int index = search_rotated(nums, 8);
    cout << index << endl;

    return 0;
}