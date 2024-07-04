/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * * 
    * * * * *
      * * *
        * 
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){
  rows = rows/2;
  
  for(int i=0;i<rows;i++){
    for(int j=0; j<rows-i-1; j++)
      cout<<"  ";
    for(int j=0; j<2*i+1;j++)
      cout<<"* ";
    for(int j=0; j<rows-i-1; j++)
      cout<<"  ";
    cout<<endl;
  }
  for(int i=0; i<rows; i++){
    for(int j=0; j<i; j++)
      cout<<"  ";
    for(int j=0; j<2*rows-(2*i +1); j++)
      cout<<"* ";
    for(int j=0; j<i; j++)
      cout<<"  ";
    cout<<endl;
  }
}

int main(){
  int rows;
  cout<<"enter number of rows : ";
  cin>>rows;

  pattern(rows);

  return 0;
}