//sum of elements in an array
#include<iostream>
using namespace std;
 int getsum(int *arr,int n){
    int sum=0;
  for(int i=0;i<n;i++){
 sum=sum+arr[i];
  }
  return sum;
 }
 int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
     cout<<"Enter elements:";
    int *arr=new int(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int sumation=getsum(arr,n);
    cout<<"Sum is:"<<sumation;
    return 0;
 }