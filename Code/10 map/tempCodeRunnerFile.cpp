#include<iostream>
#include<map>
using namespace std;
// sorted by key
int main(){

/* 1) insert() */
    map<int,int> m;
    m.insert({4,20});
/* 2) operator [] */
    m[5]=100;
    m[5]=200; //update the value at key 5
    m.insert({3,20});
    m.insert({3,60}); // no effect, no update at key 3
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<", ";
    }