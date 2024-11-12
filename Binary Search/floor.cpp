#include<bits/stdc++.h>
using namespace std;

int floor(int arr[], int n, int x){
    int high=n-1, low=0, floor=-1;

    while (low<=high)
    {
        int mid = low+high/2;
        if(arr[mid] <= x){
            floor = mid;
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return floor;    
}

int main (){
    int arr[] = {2,3,5,7,8,8,11,11,13,15,24};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = floor(arr, n, 8);

    cout << index << " " << arr[index] << endl;
}