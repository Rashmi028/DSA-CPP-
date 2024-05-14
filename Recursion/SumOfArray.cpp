//YEssssssss I did it on my own . LES GOOOOOOOOOOOOOOO!!!!!!!!!!
#include<iostream>
using namespace std;
int SumOfArray(int *arr,int size){
    int sum=0;
    if(size==0){
        return 0;
    }
    else{
    sum=arr[0]+SumOfArray(arr+1,size-1);
    return sum;
    }
}
int main(){
    int arr[]={3,2,5,1,6};
    int ans=SumOfArray(arr,5);
    cout<<ans;
}
