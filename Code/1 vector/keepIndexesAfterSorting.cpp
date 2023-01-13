#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSortedWithIndexes(vector<int> v){
    int n=v.size();
    vector<pair<int,int>> v1;
    for(int i=0; i<n; i++){
        v1.push_back({v[i], i});
    }
    
    sort(v1.begin(), v1.end());

    for(auto i : v1){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main(){

    vector<int> v {20, 40, 30, 10};
    printSortedWithIndexes(v);
  
return 0;
}