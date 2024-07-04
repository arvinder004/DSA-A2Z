#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> stk;
    stk.push(1); //{1}
    stk.push(2); //{2,1}
    stk.push(3); //{3,2,1}
    stk.push(4); //{4,3,2,1}
    stk.emplace(5); //{5,4,3,2,1}

    cout<< stk.top() << endl; //gives 5

    stk.pop(); //{4,3,2,1}

    cout<< stk.top() << endl; //gives 4

    cout<<stk.size()<<endl;

    cout<<stk.empty()<<endl;


}