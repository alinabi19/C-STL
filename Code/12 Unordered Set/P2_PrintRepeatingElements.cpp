/* 
Problem Name - Print Repeating Elements
input :- arr[]={4,8,5,8,7,5}
output :- 8 5
input :- arr[]={10,8,10,7,7,6}
output :- 10 7
*/

#include<iostream>
#include<unordered_set>
using namespace std;

void printRepeating(int arr[], int n){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
        }
        else{
        cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[]={10,8,10,8,7,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printRepeating(arr,n);
    return 0;
}