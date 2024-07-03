 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    pair<int, int> p1;
    p1.first = 10;
    p1.second = 20;
    cout << p1.first << " " << p1.second << endl;

    //to store 3 elements in a pair

    pair<int, pair<int, int>> p2 = {1,{2,3}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    //array of pairs

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[0].second<<" "<<arr[1].first<<endl;

    return 0;
 }