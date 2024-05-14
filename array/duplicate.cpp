#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
int a=0;
int b=arr[a];
int c=arr[a+1];
for(a=0;a<size;a++){
    if (arr[a]==arr[a+1]){
        cout<<arr[a]<<"\t";
    } 
}
}
int main(){
      int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }
    duplicate(arr,size);
}
