/*
1             1
1 2         2 1  
1 2 3     3 2 1
1 2 3 4 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++)
            cout<<j<<" ";
        
        for(int j=i+1; j<=(2*row) - i; j++)
            cout<<"  ";
        
        for(int j=i; j>=1; j--)
            cout<<j<<" ";
        cout<<endl;
    }
}

int main(){
    int rows;

    cout<<"enter number of rows: ";
    cin>>rows;

    pattern(rows);

    return 0;
}