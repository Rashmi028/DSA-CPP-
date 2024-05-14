//YES!!! Did it in one go!!!!!
#include<iostream>
using namespace std;
bool linearSearch(int *arr,int size,int key){
if (size==0){
    return false;
}
if(arr[0]==key){
    return true;
}
else{
   bool search= linearSearch(arr+1,size-1,key);
   return search;
}
}
int main()
{
    int arr[]={3,5,1,2,6};
    int key;
    cout<<"Enter an element to search:";
    cin>>key;
    bool ans=linearSearch(arr,5,key);
    if(ans){
        cout<<"Element is present";
    }
    else{
        cout<<"Not present";
    }
}