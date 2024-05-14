#include<iostream>
using namespace std;
int merge_sort(int arr[],int s,int e){
   for(int i=s;i<=e;i++){
    if(arr[i+1]<arr[i]){
      swap(arr[i],arr[i+1]);
    }
    cout<<arr[i]<<" ";
   }
}
int print_array(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main (){
    int arr[6]={4,2,18,6,21,19};
    int size=6;
    int s=0;
    int e=size;
    int mid=(s+e)/2;
    print_array(arr,6);
    cout<<endl;
    merge_sort(arr,s,mid);
     cout<<endl;
    merge_sort(arr,mid+1,e);
    // merge(arr,s,e);
}
