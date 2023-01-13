#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> ms;

/* 1) insert() */
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(40);
    ms.insert(10);

    for(auto x:ms){
        cout<<x<<" ";
    }

/* 2) count() */
    cout<<endl<<ms.count(10)<<endl;

/* 3) upper_bound() , 4) lower_bound() */
    auto it1 = ms.lower_bound(10);
    auto it2 = ms.upper_bound(10);

    cout<<(*it1)<<" "<<(*it2)<<endl;

/* 4) equal_range() */
    auto it = ms.equal_range(20);
    cout<<*it.first<<" "<<*it.second;

return 0;
}