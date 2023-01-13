#include<iostream>
#include<list>
using namespace std;

// list () -> doubly linkedlist
int main(){
    list<int> l{10,15,20,25};
    // or
    // list<int> l={10,15,20,25};
/* 1) push_front() , push_back()  O(1) */
    l.push_front(5);
    l.push_back(3);
    for(auto i:l){
        cout<<i<<" "; // 5 10 15 20 25 3 
    }
    cout<<endl;

/* 2) pop_front(), pop_back() O(1) */
    l.pop_front();
    l.pop_back();
    for(auto i:l){
        cout<<i<<" "; // 10 15 20 25 
    }
    cout<<endl;


/* 3) insert() */
    auto it = l.begin();
    it++;
    l.insert(it, 2, 5);
    for(auto i:l){
        cout<<i<<" ";  // 10 5 5 15 20 25
    }
    cout<<endl;

/* 4) front()  back() O(n) */

    cout<<l.front()<<endl; // 10
    cout<<l.back()<<endl; // 25

/* 5) size() O(1) */
    cout<<l.size()<<endl; // 6

/* 6) erase() */
    list<int> l1({2,4,1,5,6});
    auto it1 = l1.begin();
    it1++;
    l1.erase(it1);
    for(auto i:l1){
        cout<<i<<" "; // 2 1 5 6 
    }
    cout<<endl;

/* 7) unique() , remove() -> both O(n) */
    cout<<endl<<"Unique()"<<endl;
    list<int> l2({2,4,1,5,5,5,8,1});
    l2.unique();  // uniquely removes consecutive duplicates
    for(auto i:l2){
        cout<<i<<" "; // 2 4 1 5 8 1 
    }
    cout<<endl<<endl;
    l2.remove(5);
    for(auto i:l2){
        cout<<i<<" "; // 2 4 1 8 1
    }
    cout<<endl;


/* 11) merge() */
    list<int> l3{1,4,6,7};
    list<int> l4{2,5,0,5};
    l3.merge(l4);
    for(auto i:l3){
        cout<<i<<" "; // 1 2 4 5 0 5 6 7  
    }
    cout<<endl;

/* 12) sort() O(nlogn) */
    l3.sort();
    for(auto i:l3){
        cout<<i<<" "; // 0 1 2 4 5 5 6 7 
    }
    cout<<endl;

/* 13) reverse() O(n) */
    l3.reverse();
    for(auto i:l3){
        cout<<i<<" "; // 7 6 5 5 4 2 1 0 
    }
    cout<<endl;

return 0;
}