/*
1
2 2
3 3 3
4 4 4 4 
5 5 5 5 5
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
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