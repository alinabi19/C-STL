#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// by default it is max heap
int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
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
    cout<<endl;


/* implement a priority Queue using array or vector */

    int arr[] = {10,5,15};
    priority_queue<int> pq1(arr, arr+3);
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;

/* another way to create min heap */
    int arr1[]= {10,5,15};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i=0; i<n; i++){
        arr[i]=-arr[i];
    }
    priority_queue<int> pq2(arr, arr+3);
    while(pq2.empty()==false){
        cout<<(-pq2.top())<<" ";
        pq2.pop();
    }

return 0;
}