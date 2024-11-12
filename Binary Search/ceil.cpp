#include<bits/stdc++.h>
using namespace std;

int ceil(int arr[], int n, int x){
    int high=n-1, low=0, ceil=-1;

    while (low<=high)
    {
        int mid = low+high/2;
        if(arr[mid] >= x){
            ceil = mid;
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ceil;    
}

int main (){
    int arr[] = {2,3,5,7,8,8,11,11,13,15,24};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = ceil(arr, n, 8);

    cout << index << " " << arr[index] << endl;
}