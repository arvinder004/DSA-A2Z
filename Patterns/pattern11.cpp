/*
1
0 1
1 0 1
0 1 0 1 
1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    int k=1;
    for(int i=1; i<=row; i++){
        if(i%2 == 0) k=0;
        else k=1;
        for(int j=1; j<=i; j++){
            cout << k << " ";
            k = 1 - k; //flip
        }
        cout<<endl;
    }
}

int main(){
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;

    pattern(rows);

    return 0;
}