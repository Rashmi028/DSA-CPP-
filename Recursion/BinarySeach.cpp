#include<iostream>
using namespace std;
bool BinarySearch(int *arr,int size,int key){
     int first=0;
     int last=size-1;
     int mid=(first+last)/2;
     if(first>last){
        return false;
     }
     if(size==0){
        return false;
     }
     if(arr[mid]==key){
        return true;
     }
     if(arr[mid]>key){
        int search= BinarySearch(arr,size-mid,key);
        return search;
     }
    else{
       int search= BinarySearch(arr+mid,size,key);
       return search;
     }
     }
     

int main(){
    int arr[]={2,4,6,10,14,16};
    int key;
    cout<<"Enter an element to search:";
    cin>>key;
    bool ans=BinarySearch(arr,6,key);
    if(ans){
        cout<<"Element is present";
    }
    else{
        cout<<"Not present";
    }
}