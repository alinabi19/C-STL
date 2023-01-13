#include<iostream>
#include<queue>
using namespace std;

void printKLargest(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+k);   // copy only array hota h, vector nhi hota 
    for(int i=k; i<n; i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        } 
    }
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

// better sol -> using min heap
int main(){
    int arr[]={1,23,12,9,30,2,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    printKLargest(arr,n,k);


return 0;
}