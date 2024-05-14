#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}
 int main(){
    int n;
    cout<<"Enter which no.s factorial you want:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: ";
    int ans=factorial(n);
    cout<<ans;
 }