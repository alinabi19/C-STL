#include<iostream>
#include<list>
using namespace std;

int getSurv(int n, int k){
    list<int> l;
    for(int i=0; i<n; i++){
        l.push_back(i);
    }
    auto it = l.begin();
    while(l.size()>1){
        for(int count=1; count<k; count++){
            it++;            
            if(it==l.end()){
                it=l.begin();
            }                    
        }
        it=l.erase(it);
        if(it==l.end()){
                it=l.begin();
        }
    }
        return *it;
}   

int main(){
    int n=7, k=5;
    cout<< getSurv(n,k);
return 0;
}