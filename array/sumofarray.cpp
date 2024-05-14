#include<iostream>
using namespace std;
int counting(int arr[5]){
  int count=0;
  for (int i=0;i<5;i++){
    count++;
  }
  cout<<count;
}
int sum(int arr[5]);
int main(){
    int arr[5]={10,20,30,40,50};
    sum(arr);
    counting(arr);
}
int sum(int arr[5]){
    int i,sum=0;
    for(i=0;i<5;i++){
      sum=arr[i]+sum;
    }
    cout<<sum<<"\n";
}
