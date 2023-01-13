#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void reverseItems(vector<string> &v){
    int n=v.size();
    stack<string> s;
    for(int i=0; i<n; i++){
        s.push(v[i]);
    }
    for(int i=0; i<n; i++){
        v[i]=s.top();
        s.pop();
    }
}

int main(){
    vector<string> v{"alina", "alisha", "ayesha", "anisa"};
    cout<<"Before Reverse: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    reverseItems(v);
    cout<<"After Reverse: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
return 0;
}