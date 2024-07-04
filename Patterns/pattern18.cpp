/*
E
D E
C D E
B C D E
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){

    for(int i=0; i<rows; i++){
        for(char ch = 'E'-i; ch<= 'E'; ch++){
            cout<<ch<<" ";
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