#include<iostream>
using namespace std;
int maxelement(int nums[],int n){
    int i=nums[0];
    for(int j=1;j<n;j++){
       i=max(i,nums[j]);
    }
    cout<<i;
    cout<<endl;
    int k=nums[0];
    int max1;
   for(int h=1;h<n;h++){
       k=max(k,nums[h]);
       if(k!=i){
         max1=k;
       } 
       else 
    }
    cout<<max1;
    cout<<endl;
  cout<<(i-1)*(max1-1);  
    
}
int main(){
    int nums[2]={3,7};
    maxelement(nums,2);
    // print(nums,4);
}