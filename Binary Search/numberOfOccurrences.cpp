#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int x){
    int low=0, high=n-1, first=-1;

    while(low<=high){
        int mid = low+high/2;

        if(arr[mid] == x){
            first = mid;
            high = mid-1;
        } 
        else if(arr[mid] < x ){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;
}

int lastOccurrence(int arr[], int n, int x){
    int low = 0, high=n-1, last=-1;

    while (low<=high)
    {
        int mid = low+high/2;

        if(arr[mid] == x){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid] > x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}

pair<int, int> firstAndLastOccurence(int arr[], int n, int x){
    int first = firstOccurrence(arr, n, x);
    if(first = -1) return{-1, -1};
    int last = lastOccurrence(arr, n, x);
    return {first, last};
}

int count (int arr[], int n, int x){
    pair<int, int> ans = firstAndLastOccurence(arr, n, x);
    if(ans.first == 1) return 0;
    return ans.second - ans.first - 1;

}

int main (){
    int arr[] = {2,3,5,7,8,8,11,11,13,15,24};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout << count(arr, n, 8) << endl;
}