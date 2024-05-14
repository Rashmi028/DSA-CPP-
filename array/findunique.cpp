#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int a=0;
    int b=arr[a];
    int c=arr[a+1];
    for(int a=0;a<size;a=a+1){
    int b=arr[a];
    int c=arr[a+1];
     if (b^c==0){
        b=0;
        c=0;
        cout<<b<<c;
     }
    else {
      cout<<b;
      cout<<c;
    }

    }

}
int main (){
    // int n;
    // cin>>n;
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }
    findUnique(arr,size);
}