#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    
    ls.push_front(10); //{10}
    ls.push_front(20); //{20,10}
    ls.push_front(30); //{30,20,10}

    ls.push_back(40); //{30,20,10,40}
    ls.push_back(50); //{30,20,10,40,50}
    ls.push_back(60); //{30,20,10,40,50,60}

    for(int i:ls){
        cout<<i<<" ";
    }

    return 0;
}