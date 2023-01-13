#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);

    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;

    cout<<q.size()<<endl;

// traversal
    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

// size()
    cout<<q.size()<<endl;

// push()   // in queue element will add from back
    q.push(10);
    q.push(20);
    q.push(30);
// pop()
    q.pop();   // in queue element willl remove from front
    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;



return 0;
}