#include<iostream>
using namespace std;
int fib(int n){
    int size=n;
    int arr[size];
    arr[0]=0;
    arr[1]=1;
    for(int i=0;i<size;i++){
            arr[0]=0;
    arr[1]=1;
    arr[i+1]=arr[i]+arr[i-1];
    cout<<arr[i]<<"\n";
    }

}
 int main()
 {
    fib(50);
 }