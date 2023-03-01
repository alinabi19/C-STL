// /* 
// Problem Name - Intersection of two Unsorted Arrays
// input :- 
//         arr1[]={10,15,20,25,30,50}
//         arr2[]={30,5,15,80}
// output:- 15 30
// input :- 
//         arr1[]={10,20}
//         arr2[]={20,30}
// output:- 20
// */

// #include<iostream>
// #include<unordered_set>
// using namespace std;

// void intersection(int arr1[], int arr2[], int m, int n){
//     unordered_set<int> s;
//     for(int i=0; i<m; i++){
//         s.insert(arr1[i]);
//     }
//     for(int j=0; j<n; j++){
//         if(s.find(arr2[j])!=s.end()){
//             cout<<arr2[j]<<" ";
//         }
//     }
// }

// int main(){
//     int arr1[]={10,15,20,25,30,50};
//     int arr2[]={30,5,15,80};
//     int m=sizeof(arr1)/sizeof(arr1[0]);
//     int n=sizeof(arr2)/sizeof(arr2[0]);
//     intersection(arr1,arr2,m,n);
//     return 0;
// }