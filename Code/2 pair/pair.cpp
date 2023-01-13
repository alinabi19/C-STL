#include<iostream>
using namespace std;

int main(){

// Initialization (insert 10 20)

// way 1  (noob way)
    pair<int,int> p;
    p.first=10;
    p.second=20;
    cout<<p.first<<" "<<p.second<<endl;

// storing 3 variable
    pair<int, pair<int,int>> p5={1,{2,3}};
    cout<<p5.first<<" "<<p5.second.first<<" "<<p5.second.second<<endl;

// array of pair
    pair<int, int> arr[]={{1,2}, {3,4}, {5,6}};
    cout<<arr[1].second;
    cout<<endl;

// way 2 (lengthy way by using make_pair )
    pair<int,string> p1;
    p1 = make_pair(007, "Alina");
    cout<<p1.first<<" "<<p1.second<<endl;
   
// way 3 (best way)
    // pair<string,string> p2 {"21MCA007", "Alina"};
    // or
    // pair<string,string> p2 ("21MCA007", "Alina");
    // or
    pair<string,string> p2;
    p2 = {"21MCA007", "Alina"};
    cout<<p2.first<<" "<<p2.second<<endl;

// comparison operator  (always do comparison by seeing first element of pair)
    pair<int, int> p3{1,12}, p4(9,12);
    cout<<(p3==p4)<<" "
        <<(p3!=p4)<<" "
        <<(p3>p4)<<" "
        <<(p3<p4)<<endl;

return 0;
}