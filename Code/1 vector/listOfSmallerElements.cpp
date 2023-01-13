#include<iostream>
#include<vector>
using namespace std;

vector<int> listOfSmallerElements(vector<int> v, int k){
    vector<int> res;
    for(int i=0; i<v.size(); i++){
        if(v[i]<k){
            res.push_back(v[i]);
        }
    }
    return res;
}

int main(){

    vector<int> v {8, 100, 20, 40, 3, 7};
    int k=10;
    vector<int> res = listOfSmallerElements(v, k);

    for(auto i:res){
        cout<<i<<" ";
    }
  
return 0;
}