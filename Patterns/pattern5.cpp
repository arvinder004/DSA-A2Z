/*
* * * * *
* * * *
* * * 
* *
*
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=row; i>0;i--){
        for(int j=1; j<=i; j++){
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