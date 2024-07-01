/*
*
* *
* * *
* * * *
* * * * *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int rows;
    
    cout<<"Enter number of rows:";
    cin>>rows;

    pattern(rows);

    return 0;
}