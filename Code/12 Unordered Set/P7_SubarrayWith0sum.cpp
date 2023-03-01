/* 
Problem Name - Subarray with 0 sum
input :- arr[] = {1,4,13,-3,-10,5}
output:- Yes
input :- arr[]={1,4,-3,1,2}
output:- Yes
*/

#include<iostream>
#include<unordered_set>
using namespace std;

bool isSum(int arr[], int n){
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0; i<n; i++){
        pre_sum=pre_sum+arr[i];
        if(s.find(pre_sum)!=s.end())
            return true;
        if(pre_sum==0)
            return true;
        s.insert(pre_sum);
    }
    return false;
}

int main(){
    int arr[]={1,4,-3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<isSum(arr, n);
    return 0;
}