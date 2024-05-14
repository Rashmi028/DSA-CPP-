//Merge two sorted array
#include<iostream>
using namespace std;
void  mergearray(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    int k=0;
    int size=m+n;
    int arr[size];
  while(i<m && j<n){
        if(arr1[i]>arr2[j]){
            arr[k++]=arr2[j++];
        }
        else {
            arr[k++]=arr1[i++];
        } 
    }
   
  while(i<m){
    arr[k++]=arr1[i++];
  }

  while(j<n){
    arr2[k++]=arr2[j++];

  }
}
void printMergedArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
   cout <<endl;
}
// int printing(int arr1[],int arr2[],int m,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"\t";
//     }
// }
int main(){
    int arr1[3]={1,3,4};
    int arr2[4]={2,3,6,7};
       int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int size = m + n;
    int merged[size];

    mergearray(arr1, arr2, m, n);

    // Print the merged array arr1 after merging
    printMergedArray(arr1, size);
}