#include<iostream>
using namespace std;
int counting(int arr[],int s,int e){
   
 int count=0;
 for(int i=0;i<e;i++){
    if( arr[0]<arr[i]){
        count++;
    }
 }
swap(arr[count], arr[0]);
int i = 0,j=e;
while(i<count && j>count){
     if (arr[i]>arr[j]){
        swap(arr[i],arr[j]);
        i++;  
        j--;
     }
     else{
       i++;
       j--;
     }
}
return count;
}

void quicksort(int arr[],int s,int e){
    if(s>=e){
     return ;
    }
     int p=counting(arr,s,e);
     quicksort(arr,s,p-1);
     quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={3,1,6,5,2};
    counting(arr,0,5);
    quicksort(arr,0,5);
}
