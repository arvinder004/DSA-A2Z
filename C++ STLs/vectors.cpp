 #include<bits/stdc++.h>
 using namespace std;

int main(){
    vector<int> v1;
    // vector<char> v2;
    // vector<string> v3;
    
    for(int i=0; i<5; i++)
        v1.push_back(i);
    
    for(auto i : v1)
        cout<<v1[i] << " ";
    
    cout<<endl;
    
    cout<<"v1.front() = "<<v1.front()<<endl;
    cout<<"v1.back() = "<<v1.back()<<endl;
    cout<<"v1.begin() = "<<*(v1.begin())<<endl;
    cout<<"v1.end() = "<<*(v1.end())<<endl;

    vector<int>::iterator it = v1.begin();

    //loops

    for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
        cout<<*(it)<<" ";
    }
    cout << endl;
    for(auto it=v1.begin(); it != v1.end(); it++){
        cout<<*(it)<<" ";
    }
    cout << endl;
    for(auto it : v1){
        cout<<it<<" ";
    }

    //check weather vector is empty or not

    if(v1.empty())
        cout<<"vector is empty";
    else
        cout<<"vector is not empty";
}