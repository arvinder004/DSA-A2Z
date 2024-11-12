#include<bits/stdc++.h>
using namespace std;

int upperBound(int arr[], int n, int x){
    int low = 0, high = n-1, lb = n;

    while (low <= high)
    {
        int mid = low+high/2;

        if(arr[mid] > x){
            lb = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return lb;
}

int main (){
    int arr[] = {2,3,5,7,8,8,11,11,13,15,24};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = upperBound(arr, n, 8);

    cout << index << " " << arr[index] << endl;
}