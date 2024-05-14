//Bubble sort using recursion
#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
    
   
    if(n==0||n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            swap(arr[i],arr[i+1]);
        }
    }
        bubblesort(arr,n-1);
    }

int main (){

    int arr[5]={3,4,10,5,2};
    bubblesort(arr,5);
    int size=5;
    for(int i=0;i<size;i++){
      cout<<arr[i]<<"\t";
    }
   
    
}