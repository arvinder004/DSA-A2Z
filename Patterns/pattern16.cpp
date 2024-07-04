/*
A
B B
C C C
D D D D
E E E E E
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){

    char ch = 'A';
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

int main(){
    int row;
    cout<<"enter number of rows: ";
    cin>>row;

    pattern(row);
}