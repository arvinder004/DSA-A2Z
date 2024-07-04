#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    q.push(1); //{1}
    q.push(2); //{1,2}
    q.push(3); //{1,2,3}
    q.emplace(4); //{1,2,3,4}

    q.back() += 5; //adds 5 to the last element {1,2,3,9}
    q.front() += 5; //adds 5 to the first element {6,2,3,9}

    cout<<q.back()<<endl; //prints the last element 
    cout<<q.front()<<endl; //prints the first element

    q.pop(); //{2,3,9} 
    cout<<q.front()<<endl;

    cout<<q.size()<<endl;

}