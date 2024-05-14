#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <char> rev;
    string s ;
    cin>>s;
    for(int i=0;i<s.length();i++){
        rev.push(s[i]);
    }
    string ans="";
    while(!rev.empty()){

     ans.push_back(rev.top());
     rev.pop();
    }

    cout<<"Reversed string: "<<ans;

}

