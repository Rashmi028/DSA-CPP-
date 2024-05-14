#include<iostream>
using namespace std;
int selection(int arr[],int size){
    for(int i=0;i<size;i++){
        int small=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                 small=j;
                 }
                 if(small!=i){
                int temp=arr[i];
                arr[small]=arr[i];
                arr[small]=temp;
            }
        // else{
        //    break;
        // }
             
        }
      
       
    }
  
    // return 0;
}
int printing(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\n";
    }
}

int main(){
    int key;
    int arr[6]={1,6,2,4,9,7};
    selection(arr,6);
    int index=printing(arr,6);
    printf("The sorted array is:%d",printing);
    
}