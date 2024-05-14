#include<iostream>
using namespace std;
bool linear_search(int arr[],int size,int key){
      for (int i=0;i<size;i++){
      if(arr[i]==key){
       return 1;
      }
     
      }
       return 0;
    
}
int main(){
    int arr[5]={2,3,1,67,54};

    cout<<"enter no. to search:";
    int key;
    cin>>key;
    bool index= linear_search(arr,5,key);
    if(index){
      cout<<"Present ";
      }
      else{
        cout<<"Not present";
      }
      
    }
