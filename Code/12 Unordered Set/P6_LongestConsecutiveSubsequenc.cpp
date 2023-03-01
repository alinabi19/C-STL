/* 
Problem Name - Longest Consecutive Subsequence
input :- arr[]={1,9,3,4,2,20}
output :- 4                 {1,2,3,4} => length=4, o/p=4 
input :- arr[]={8,20,7,30}
output :- 2                 {7,8} => length=2, o/p=2 
input :- arr[]={20,30,40}
output :- 1                 {20} or {30} or {40} => length=1, o/p=1
*/

#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;

// Method-1 (Using Sorting)   TC-> O(nlogn)
int findLongest1(int arr[], int n){
    sort(arr,arr+n);
    int res=1,curr=1;
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]+1){
            curr++;
        }
        else{
            res=max(res,curr);
            curr=1;
        }
    }
    res=max(res,curr);
    return res;
}

// Method-2 (Using UnorderedSet)   TC-> O(n)
int findLongest2(int arr[], int n){
    int res=0;
    unordered_set<int> h;
    for(int i=0; i<n; i++){
        h.insert(arr[i]);
    }
    for(int i=0; i<n; i++){
        if(h.find(arr[i]-1)!=h.end()){
            int curr=1;
            while(h.find(arr[i]+curr)!=h.end())
                curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main(){
    int arr[]={1,9,3,4,2,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findLongest1(arr,n)<<endl;
    cout<<findLongest2(arr,n);
    return 0;
}