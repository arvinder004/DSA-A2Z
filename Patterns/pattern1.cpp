/*
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int row;

    cout<<"Enter number of rows : ";
    cin>>row;
    
    pattern(row);

    return 0;
}