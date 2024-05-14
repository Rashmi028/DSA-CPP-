
//0-red,1-white,2-blue, sort the colors such that the same colors are together
#include<iostream>
using namespace std;
int sortcolors(int nums[],int n){
      for(int i=0;i<n;i++){   
    for (int j=i+1;j<n;j++){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
      
} 

      }
}

int print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<"\t";
    }
}
int main(){
    int nums[6]={2,0,2,1,1,0};
    sortcolors(nums,6);
    print(nums,6);
}