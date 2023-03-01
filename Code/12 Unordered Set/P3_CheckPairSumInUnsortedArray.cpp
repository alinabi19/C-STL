/* 
Problem Name - Check Pair Sum in Unsorted Array
input :- 
        arr[]={3,2,8,15,-8}
        sum = 17
output:- Yes
input :- 
        arr[]={2,4,6,3}
        sum = 11
output:- No
*/

#include<iostream>
#include<unordered_set>
using namespace std;

bool isPair(int arr[], int n, int sum){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.find(sum-arr[i])==s.end()){
            return true;
        }
        else{
        s.insert(arr[i]);
        }
        return false;
    }
}

int main(){
    int arr[]={3,2,8,15,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=17;
    cout<<isPair(arr,n,sum);
    return 0;
}