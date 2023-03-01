#include<iostream>
#include<unordered_set>
using namespace std;

// unordered_set does not maintain any order of the element.
int main(){

/* 1) insert() */
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(10);

    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl<<endl;

/* 2) begin(), 3) end(), 4) size(), 5) erase() */

    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.clear();
    cout<<s.size()<<endl;

/* 6) find()*/
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(15);
    if(s.find(15)==s.end()){
        cout<<"Not Found";
    }
    else{
        cout<<"Found "<<*(s.find(15));
    }
    cout<<endl;

/* 7) count()*/
    if(s.count(15)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found "<<endl;
    }
    cout<<endl;
    
/* 6 erase() */
    cout<<s.size()<<" ";
    s.erase(15);
    cout<<s.size()<<" ";
    auto it=s.find(10);
    s.erase(it);
    cout<<s.size()<<" ";
    
return 0;
}