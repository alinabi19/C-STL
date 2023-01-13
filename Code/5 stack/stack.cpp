#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

/* 1) push() O(1) */
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

/* 2) pop() O(1) */
    s.pop();

/* 3) top() O(1) */
    cout<<s.top()<<endl;

/* 4) size() O(1) */
    cout<<s.size()<<endl;

/* 5) empty() O(1) */
    cout<<s.empty()<<endl;

/* traverse */
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}