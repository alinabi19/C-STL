#include<iostream>
#include<vector>
using namespace std;

int main(){

// Initialization (insert {5, 10, 15, 20, 25})

// way 1
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);

// traversing vector
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

// way 2
    vector<int> v1{5, 10, 15, 20, 25};
    // or
    // vector<int> v1={5, 10, 15, 20, 25};

    for(auto i:v1){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;

// way 3 (from array)
    int arr[]={5,10,15,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v2(arr, arr+n);
    for(auto i:v2){
        cout<<i<<" ";
    }
     cout<<endl;
}