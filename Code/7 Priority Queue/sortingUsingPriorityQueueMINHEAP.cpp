#include<iostream>
#include<queue>
using namespace std;
// sorting using min heap
void mySort(int arr[], int n){
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+n);   // copy only array hota h, vector nhi hota 
    for(int i=n-1; i>=0; i--){
        arr[i]=pq.top();
        pq.pop();
    }
}
int main(){
    int arr[]={23,4,12,67,89,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    mySort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

return 0;
}