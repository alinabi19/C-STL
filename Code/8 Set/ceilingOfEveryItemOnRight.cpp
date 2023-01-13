#include<iostream>
#include<set>
#include<vector>
using namespace std;

void helper(vector<int> v){
    int n=v.size();
    set<int> s;
    int res[n];
    for(int i=n-1;i>=0; i--){
        auto it = s.lower_bound(v[i]);
        if(it==s.end())
            res[i]=-1;
        else
            res[i]=*it;
            s.insert(v[i]);
    }
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
}
int main(){
    vector<int> v{10,100,200,30,120,120}; // we have to find nearest highest element on right side
    helper(v);
return 0;
}