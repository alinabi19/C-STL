#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

/* 1) push_back() O(1) */

    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);

    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;

/* 2) pop_back() O(1) */
    v.pop_back();
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;

/* 3) front() O(1) */
    cout<<v.front()<<endl;

/* 4) back() O(1) */
    cout<<v.back()<<endl;

/* 5) begin(), end(), rbegin(), rend()  -> O(1)*/
    auto it = v.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
     cout<<endl;

    for(auto it=v.rbegin(); it!=v.rend(); it++){
        cout<<*it<<" ";
    }
     cout<<endl;

/* 4) insert()  O(n) */
    v.insert(v.begin(), 200);
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;
    v.insert(v.begin()+2, 100);
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;

    v.insert(v.begin(), 2, 300);
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;

    // insrting element of vector container in new vector
    vector<int> v1;
    v1.insert(v1.begin(), v.begin(), v.begin()+3);
    for(auto i:v1){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl;   

/* 5) erase() O(n) */
    v.erase(v.begin());
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl; 

/* 6) resize() O(n) */
    v.resize(5);
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }   

/* 7) clear() O(1)
   8) empty() O(1) */
    v.clear();
    cout<<endl<<v.empty()<<endl;
    for(auto i:v){   // for each loop
        cout<<i<<" ";
    }
     cout<<endl; 
     
}

