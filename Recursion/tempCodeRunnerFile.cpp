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
     