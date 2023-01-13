#include<iostream>
#include<map>
using namespace std;
// sorted by key
int main(){

/* 1) insert() */
    multimap<int,int> mp;
    mp.insert({4,20});

    mp.insert({3,20});
    mp.insert({3,60}); // in multiset, can insert multiple values at single key.
    for(auto &x:mp){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl<<endl;

/* 2) count(), 3) erase() */
    mp.insert({10,200});
    cout<<mp.count(3)<<endl;
    cout<<mp.count(10)<<endl;
    mp.erase(3);  
    cout<<mp.count(10)<<endl;

    for(auto &x:mp){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl;

// /* 4) lower_bound(), 5) upper_bound() */
    mp.insert({5,34});
    mp.insert({7,150});
    mp.insert({6,23});
    for(auto &x:mp){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl;

    auto it1 = mp.lower_bound(5);
    if(it1!=mp.end())
        cout<<(*it1).first;
    else
        cout<<"Not Equal or Greater Value";
    cout<<endl;

    auto it2 = mp.upper_bound(5);
    if(it2!=mp.end())
        cout<<(*it2).first;
    else
        cout<<"Not Greater Value";
    cout<<endl;

/* 6 erase() */
    mp.insert({10,66});
    mp.insert({10,65});
    mp.insert({20,98});
    auto it = mp.equal_range(10);
    for(auto itr=it.first; itr!=it.second; itr++)
        cout<<itr->first<<" "<<itr->second<<endl;
return 0;
}