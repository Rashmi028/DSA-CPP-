#include<iostream>
using namespace std;
int arithmeticp(int n){
    int ap;
   ap=3*n+7;
   return ap;

}
int main(){
    int n;
    cin>>n;
    int nth= arithmeticp(n);
    cout<<nth;
    return 0;
    

}