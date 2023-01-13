#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> stockSpan(vector<int> &v){
    stack<int> s;
    s.push(0);
    int n = v.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        while(s.empty() == false && v[s.top()] <= v[i]){
            s.pop();
        }
        int span = (s.empty()) ? (i+1) : (i=s.top());
        ans.push_back(span);
        s.push(i);
    }
    return ans;
}
int main(){

    vector <int> v = {10,20,30,40};
    vector <int> v1 = stockSpan(v);
    for(auto i:v1){
        cout<<i<<" ";
    }
return 0;
}