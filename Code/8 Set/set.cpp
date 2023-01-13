#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    // set<int, greater<int>> s; // this will print in reverse order
// 1) insert                      // set remove the duplicacy only stored the distinct elements
    s.insert(100);
    s.insert(50);
    s.insert(70);
    s.insert(100);
    s.insert(70);
    s.insert(40);
    s.insert(100);

// traverse    
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;

// 2) begin(), end(), 3) rbegin(), rend()
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it = s.rbegin(); it!=s.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

// 4) find()
    auto it = s.find(100);
    if(it==s.end()){
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    cout<<endl;

// 5) clear()
    s.clear();
    cout<<s.size()<<endl;

// again insrting elements
    s.insert(100);
    s.insert(50);
    s.insert(70);
    s.insert(100);
    s.insert(70);
    s.insert(40);
    s.insert(100);

// 6) count()   // se can treat it as find, bcz in set all elements are present only single time so its return true only when elements is found in set.
    if(s.count(100)){
        cout<<"Found";
    }
    else cout<<"Not Found";
    cout<<endl;

// erase()
    s.erase(100);
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;


    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(70);
    s.insert(80);

// lower_bound(), upper_bound()
    auto it1 = s.upper_bound(30);
    if(it1!=s.end()){
        cout<<*it1<<" ";
    }
    else{
        cout<<"Given element is greater than the largest";
    }


    auto it2 = s.lower_bound(60);
    if(it2!=s.end()){
        cout<<*it2<<" ";
    }
    else{
        cout<<"Given element is greater than the largest";
    }

return 0;
}