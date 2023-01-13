#include<iostream>
#include<map>
using namespace std;
// sorted by key
int main(){

/* 1) insert() */
    map<int,int> m;
    m.insert({4,20});
/* 2) operator [] */
    m[5]=100;
    m[5]=200; //update the value at key 5
    m.insert({3,20});
    m.insert({3,60}); // no effect, no update at key 3
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl<<endl;
/* 3) clear(), 4) at() */
    m.clear();
    
    m.insert({10,200});
    cout<<m.size()<<" ";
    m.at(10)=100;  // update the value at key 10
    cout<<m.size()<<" ";

    cout<<endl;
    cout<<endl<<endl;
    m.insert({23,545});
    m.insert({12,234});
    m.insert({11,800});

    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<", ";
    }
    cout<<endl;

/* 5) begin(), 6) end() */
    for(auto it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

/* 7) find() */
    map<int, string> m1;
    m1.insert({5,"more"});
    m1.insert({2,"do"});
    m1.insert({1,"alina"});
    m1.insert({6,"practice"});

    if(m1.find(5)==m1.end())
        cout<<"Not found";
    else    cout<<"Found";
    cout<<endl;

// or
    for(auto it1=m1.begin(); it1!=m1.end(); it1++){
        cout<<(*it1).first<<" "<<(*it1).second<<", ";
    }
    cout<<endl;

/* 8) count() */
    if(m1.count(5)==0)
        cout<<"Not Found";
    else
        cout<<"Found";

    cout<<endl;

/* 9) lower_bound() */
    auto it2 = m1.lower_bound(5);
    if(it2!=m1.end())
        cout<<(*it2).first;
    else
        cout<<"Not Equal or Greater Value";
    cout<<endl;

/* 10) upper_bound() */
    auto it3 = m1.upper_bound(5);
    if(it3!=m1.end())
        cout<<(*it3).first;
    else
        cout<<"Not Greater Value";
    cout<<endl;

/* 11) erase() */
    cout<<m1.size()<<endl;
    m1.erase(5);
    cout<<m1.size()<<endl;

return 0;
}