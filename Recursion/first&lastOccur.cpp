#include<iostream>
using namepsace std;
int firstoccur(int*arr,int size,int key){
int s=0;
int e=size-1;
int mid=(s+e)/2;
 
}
int lastoccur(int *arr,int size,int key){
int s=0;
int e=size-1;
int mid=(s+e)/2; 
}
 int main(){
    int key;
    int arr[8]={0,0,1,1,2,2,2,2};
      cout<<"Enter key to search:";
      cin>>key;
    int first=firstoccur(arr,8,key);
    int last=lastoccur(arr,8,key);
    cout<<first<<endl<<last;  
 }
