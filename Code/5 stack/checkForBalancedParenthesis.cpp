#include<iostream>
#include<string>
#include<stack>
using namespace std;

// walkccc site way-------------
// int pop(stack<char>& stack) {
//     const int c = stack.top();
//     stack.pop();
//     return c;
//   }
// bool isValid(string s) {
//     stack<char> stack;

//     for (const char c : s)
//       if (c == '(')
//         stack.push(')');
//       else if (c == '{')
//         stack.push('}');
//       else if (c == '[')
//         stack.push(']');
//       else if (stack.empty() || pop(stack) != c)
//         return false;

//     return stack.empty();
// }

bool matching(char a, char b){
    return((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}

bool isValid(string str){
    stack<int> s;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(s.empty()==true)
                return false;
            else if(matching(s.top(), str[i])==false)
                return false;
            else
                s.pop();
        }
    }
    return(s.empty()==true);
}

int main(){
    string s = "{)[()]";
    cout<<isValid(s);
return 0;
}