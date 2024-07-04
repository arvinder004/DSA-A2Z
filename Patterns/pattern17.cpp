/*  
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int row){
    for(int i=0; i<row; i++){
        for(int j=0;j<row-i-1;j++)
            cout<<"  ";
        
        char ch = 'A';
        for(int j=0; j<2*i+1; j++){
            cout<<ch<<" ";
            if(j<(2*i+1)/2)         
                ch++;
            else    
                ch--;
        }
        
        for(int j=0;j<row-i-1;j++)
            cout<<"  ";
        cout<<endl;
    }
}

int main(){
    int row;

    cout<<"Enter number of rows: ";
    cin>>row;

    pattern(row);
}