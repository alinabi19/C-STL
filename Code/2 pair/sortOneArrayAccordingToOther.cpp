#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1{3,1,2};
    vector<char> v2{'A', 'E', 'I'};
    int n=v1.size();
    
    vector<pair<int, char>> vp;
    for(int i=0; i<n; i++){
        vp.push_back({v1[i], v2[i]});
    }

    sort(vp.begin(), vp.end());

    for(int i=0; i<n; i++){
        cout<<vp[i].second<<" "; 
    }

return 0;
}
