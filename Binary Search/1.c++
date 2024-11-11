#include <bits/stdc++.h>
using namespace std;

// ITERATIVE CODE

int BinarySearchIterative(vector<int> &nums, int n, int target)
{
    int high = n-1, low = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

//RECURSIVE CODE

int BinarySearchRecursive(vector<int> &nums, int high, int low, int target){
    if(high < low) return -1;

    int mid = low +(high - low)/2;

    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return BinarySearchRecursive(nums, high, mid+1, target);
    return BinarySearchRecursive(nums, mid-1, low, target);
}

int main()
{
    vector<int> nums = {12, 15, 18, 25, 29, 35, 39, 48, 50, 56, 65};
    int n = nums.size();
    int target = 48;

    int index1 = BinarySearchIterative(nums, n, target);
    int index2 = BinarySearchRecursive(nums, n-1, 0, target);


    cout << index1 << " " << index2 << endl;
}