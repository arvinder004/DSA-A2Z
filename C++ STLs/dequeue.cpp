#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);
    for(auto ele:dq){
        cout<<ele<<" ";
    }
    cout<<endl;

    dq.push_front(3);
    dq.emplace_front(4);
    for(auto ele:dq){
        cout<<ele<<" ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_front();
    for(auto ele:dq){
        cout<<ele<<" ";
    }
    cout<<endl;
}