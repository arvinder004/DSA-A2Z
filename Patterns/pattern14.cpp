/*
A
A B
A B C
A B C D
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){

    for(int i=0; i<rows; i++){
        char ch = 'A';
        for(int j=0; j<=i; j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row;
    cout<<"enter number of rows: ";
    cin>>row;

    pattern(row);
}