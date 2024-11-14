#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>& nums){

    int low = 0, high = nums.size()-1;
    int ans = INT_MAX, index = -1;

    while (low<=high)
    {
        int mid = (low + high) / 2;

        if(nums[low] <= nums[high]){
            if(nums[low] < ans){
                ans = nums[low];
                index = low;
            }
            break;
        }

        if(nums[low] <= nums[mid]){
            if(nums[low] < ans){
                ans = nums[low];
                index = low;
            }
            low = mid + 1;
        }
        else{
            if(nums[mid] < ans){
                ans = nums[mid];
                index = mid;
            }
            high = mid - 1;
        }
    }
    return index;
}

int main(){
    vector<int> nums = {5,4,1,2,3};
    cout<<findKRotation(nums)<<endl;

    return 0;
}