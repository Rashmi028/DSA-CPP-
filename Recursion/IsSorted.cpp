#include<iostream>
using namespace std;
bool Issorted(int *arr,int size){
    if (size==0||size==1){
        return true;
    }
    if (arr[0]>arr[1]){
        return false;
    }
    else{
        bool searchindex= Issorted(arr+1,size-1);
        return searchindex;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    bool ans=Issorted(arr,5);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Not sorted";
    }
}