#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> nextGreater(vector<int> &v){
    stack<int> s;
    int n = v.size();
    s.push(v[n-1]);
    vector<int> ans;
    ans.push_back(-1);
    for(int i=n-2; i>=0; i--){
        while(s.empty() == false && s.top() <= v[i]){
            s.pop();
        }
        int nextGrt = (s.empty()) ? -1 : s.top();
        ans.push_back(nextGrt);
        s.push(v[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector <int> v = {5,15,10,8,6,12,9,18};
    vector<int> v1= nextGreater(v);
    for(auto i:v1){
        cout<<i<<" ";
    }
return 0;
}