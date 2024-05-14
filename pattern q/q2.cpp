#include<iostream>
using namespace std;
int main(){
    int n=4;
    cout<<"enter number:";
     cin>>n;
    
    int i=1;
    while(i<=n){
        int j=1;
        string print="*";
        while(j<=i){
           cout<<print;
           
           j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
}