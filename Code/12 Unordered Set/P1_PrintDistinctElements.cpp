/* 
Problem Name - Print Distinct Elements
input :- arr[]={4,8,5,8,7,5}
output :- 4 8 5 7
input :- arr[]={10,8,4,10,10,6}
output :- 10 8 4 
*/

#include<iostream>
#include<unordered_set>
using namespace std;

void printDistinct(int arr[], int n){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    for(int x:s){
        cout<<x<<" ";
    }
}

int main(){
    int arr[]={10,8,10,10,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr,n);
    return 0;
}