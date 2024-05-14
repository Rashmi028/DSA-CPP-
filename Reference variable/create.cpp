#include<iostream>
using namespace std;
int main(){
    int i=5;
    int &j=i;
    j++;
    i++;
    j--;
     //cout<<i<<endl;
    cout<<j<<endl;
    return 0;
}