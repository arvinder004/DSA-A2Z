/*
A B C D E
A B C D
A B C
A B
A
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){

    for(int i=rows; i>0; i--){
        char ch = 'A';
        for(int j=i; j>0; j--){
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