#include<iostream>
using namespace std;
 int arr[100];
int findSetBit(int N) {   
    // Write your code here
   
for(int i=0;i<N;i++){
     arr[i]=(N % 2);
     N=N/2;
}
for(int i=i-1;i>=0;i--){
cout<<arr[i];
}
}
int main(){
  findSetBit(6);

}