#include<iostream>
using namespace std;
void swapalt(int arr[],int n){
int a=0;
int b=arr[a];
int c=arr[a+1];
int end=arr[n-1];
//even number alternate swap
if(n%2==0){
for(a=0;a<n-1;a=a+2){
int b=arr[a];
int c=arr[a+1];
swap(b,c);
cout<<b<<c;
}
}
//odd no. alternate swap
else{
for(a=0;a<n-1;a=a+2){
int b=arr[a];
int c=arr[a+1]; 

swap(b,c);
cout<<b<<c;
}
cout<<end;

}
}
//cout<<c;



int main(){
    int n;
    cout<<"Size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }

    
    //int arr[6]={1,3,4,2,5,7};
    swapalt(arr,n);
    // cout<<endl;
  //cout<<arr[5];
}