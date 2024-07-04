/*
*
* *
* * *
* * * *
* * * * * 
* * * * 
* * *
* *
*
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int rows){
    // rows = (rows-1)/2;
    // for(int i=1; i<=rows; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<=rows; i++)
    //     cout<<"* ";
    // cout<<endl;
    // for(int i=rows-1; i>=0; i--){
    //     for(int j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
   
    int k;
    for(int i=1; i<=rows; i++){
        if(i <= rows/2) 
            k=i; 
        else if(i == (rows/2)+1) 
            k = (rows/2)+1; 
        
        for(int j=1; j<=k; j++){
            cout<<"* ";
        }
        cout<<endl; 
    }
    for(int i=(rows/2)+2; i<=rows; i++){
        for(int j=rows/2; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main(){
    int rows;
    cout<<"Enter (odd) number of rows : ";
    cin>>rows;

    pattern(rows);
}