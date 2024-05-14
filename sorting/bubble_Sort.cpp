// #include<iostream>
// using namespace std;
// int Bubble_sort(int arr[],int size){
// int i;
// int next,temp;
// // for(int j=0;j<size;j++){
// // for( i=0;i<size;i++){
   
// // if(arr[i]>arr[i+1]){
// //    // temp=arr[i];
// //    // arr[i]=arr[i+1];
// //    // arr[i+1]=temp;
// //    swap(arr[i],arr[i+1]);
// //    // i++;

// // }
// //    // cout<<arr[i]<<"\t";

// // }
// // // cout<<"\n";
// // }
// sort(arr.begin(),arr.end());

// }
// int printing(int arr[],int size){
//      cout<<"The sorted array is: ";
//     for(int i=0;i<size;i++){
//       cout<<arr[i]<<"\t";
//     }
// }
// int main(){
// int size;
// int arr[10]={10,23,4,42,39,19,2,3,6,14};

// Bubble_sort(arr,10);
// printing(arr,10);
// return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<n;i++){
      cout<<arr[i];
    }

}