//find the element which is appearing more than 25% of times of the array . there is exactly one element.
#include<iostream>
using namespace std;
void findelement(int arr[],int n){
    int count=0;
    qtr=n/4;
    int i=arr[0];
    int j=i+1;
    for(int j=0;j<n;j++){
        if(i==arr[j]){
            count++
        }
        else{
            count=1;
        }
         if(count>qtr){
           return arr[i];
         }
         else{
            
         }
    }
   
}

int print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<"\t";
    }
}
int main(){
    int arr[9]={1,2,2,6,6,6,6,7,10};
    findelement(arr,9);
    print(arr,9);
}
