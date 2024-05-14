#include<iostream>
using namespace std;
void movezeroes(int arr[],int n){
    int i;
     for(int j=0;j<n;j++){   
    for (i=j;i<n-1;i++){
        if(arr[i]==0){
            swap(arr[i],arr[i+1]);
        }

        else{
            i++;
        }
    }
    }
    movezeroes(arr,n-1); 
}
    

int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[10]={0,0,0,0,33,3,3,4,0,0};
    movezeroes(arr,10);
    print(arr,10);
}