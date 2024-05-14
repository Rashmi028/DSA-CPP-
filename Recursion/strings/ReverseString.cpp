#include<iostream>
using namespace std;

void reversestring(string &s,int i,int j){
   
   if(i>j){
    return ;
   }
   else{
   swap(s[j],s[i]);
   i++;
   j--;
   }
   reversestring(s,i,j);
}
int main(){
   string x;
    cout<<"Enter a string: ";
    cin>>x;
    reversestring(x,0,x.length()-1);
    cout<<endl;
    cout<<x;

    return 0;
    // for (int i=0;i<x.length();i++){
    //     if(x[x.length()]%2==0){
    //         cout<<x;
    //     }
    //     if(x[i]%2!=0){
    //       cout<<x[i];
    //     }
    //     else{    
    //     cout<<"\"\"";
    //     }
    // };
}