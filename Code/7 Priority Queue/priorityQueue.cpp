#include<iostream>
#include<queue>
using namespace std;

// by default it is max heap
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(1);
    pq.push(100);
    pq.push(67);

    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;

    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
return 0;
}