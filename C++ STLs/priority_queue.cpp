#include<bits/stdc++.h>
using namespace std;

int main(){
    //the highest value remains at front
    //not a linear data stricture, a tree is maintained

    priority_queue<int>pq;

    pq.push(2); //{2}
    pq.push(5); //{5,2}
    pq.push(6); //{6,5,2}
    pq.push(4); //{6,5,4,2}
    pq.emplace(7); //{7,6,5,4,2}

    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    //minimum priority queue

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(2); //{2}
    pq1.push(5); //{2,5}
    pq1.push(6); //{2,5,6}
    pq1.push(4); //{2,4,5,6}
    pq1.emplace(7); //{2,4,5,6,7}

    cout<<pq1.top()<<endl;

    pq1.pop();

    cout<<pq1.top()<<endl;
}