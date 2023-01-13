#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevGreater(vector<int> &v){
    stack<int> s;
    s.push(v[0]);
    int n = v.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        while(s.empty() == false && s.top() <= v[i]){
            s.pop();
        }
        int pg = (s.empty()) ? -1 : s.top();
        ans.push_back(pg);
        s.push(v[i]);
    }
    return ans;
}

int main(){
    vector <int> v = {20,30,10,5,15};
    vector<int> v1= prevGreater(v);
    for(auto i:v1){
        cout<<i<<" ";
    }
return 0;
}