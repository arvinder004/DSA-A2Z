/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-i-1; j++ )
          cout<<"  ";
        for(int j=0; j<2*i+1; j++)
          cout<<"* ";
        for(int j=0; j<rows-i-1; j++)
          cout<<"  ";
    cout<<endl;
    }
}

int main(){
  int row;

  cout<<"Enter number of rows: ";
  cin>>row;

  pattern(row);

  return 0;
}