/*
01
02 03
04 05 06 
07 08 09 10
11 12 13 14 15

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    int num = 1;
    for(int i=0; i<row; i++){
        for(int j=0; j<=i; j++){
            if(num<10) cout<<0<<num++<<" ";
            else cout<<num++<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;

    pattern(row);
}