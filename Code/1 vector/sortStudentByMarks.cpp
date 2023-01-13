#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printSortedByMarks(vector<int> roll, vector<int> marks){
    int n=roll.size();
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        v.push_back({marks[i], roll[i]});
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>()); // greater<pair<int,int>>() -> with this sorting is happened in reverse order (default is increasing)
    for(int i=0; i<n; i++){
        cout<<v[i].second<< " "<< v[i].first;
        cout<<endl;
    }
}

int main(){

    vector<int> roll {101,108,103,105};
    vector<int> marks {70,80,40,90};
    
    printSortedByMarks(roll, marks);
  
return 0;
}