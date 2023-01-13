#include<iostream>
#include<forward_list>
using namespace std;

// forward_list () -> singly linkedlist
int main(){
    forward_list<int> l{10,15,20,25};
    // or
    // forward_list<int> l={10,15,20,25};
/* 1) push_front() O(1) */
    l.push_front(5);
    l.push_front(3);
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

/* 2) pop_front() O(1) */
    l.pop_front();
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

/* 3) assign()   O(1) for 1 item */
    l.assign({1,2,3,5,5,7});
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

// creating a forward_list of values 10 (5 times)
    forward_list<int> l1;
    l1.assign(5,10);
    for(auto i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

// copying one forward_list with other
    forward_list<int> l2;
    l2.assign(l.begin(), l.end());
    for(auto i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

/* 4) remove()  O(n) */
    l.remove(5);
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

/* 5) insert_after() O(1) ,  6) emplace_after() O(1) , 7) erase_after() O(1) */

/* 8) clear() */
    l.clear();
    for(auto i:l){
        cout<<i<<" ";
    }
    cout<<endl;

/* 9) empty() */
    cout<<l.empty()<<endl;

/* 10) reverse() O(n) */
    l2.reverse();
    for(auto i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

/* 11) merge() */
    forward_list<int> l3{1,4,6,7};
    forward_list<int> l4{2,5,0,5};
    l3.merge(l4);
    for(auto i:l3){
        cout<<i<<" ";
    } 
    cout<<endl;

/* 12) sort() O(nlogn) */
    l3.sort();
    for(auto i:l3){
        cout<<i<<" ";
    }
    cout<<endl;
   
return 0;
}