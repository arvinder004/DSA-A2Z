/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
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