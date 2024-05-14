#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1;
        int print=i;
        while(j<=i){ 
           cout<<print;
           //print=print+1;
           j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
    return 0;
}