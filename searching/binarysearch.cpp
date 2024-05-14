   #include<iostream>
   using namespace std;
   int binary(int arr[],int key,int size){
   int n=size;
   int first=0;
   int last=n-1;
   int mid=(first+last)/2;
   while(first<=last){
   if (arr[mid]==key){
    return mid;
   }
   if(arr[mid]>key){
      last=mid-1;
    

   }
   if(arr[mid]<key){
      // else{
      first=mid+1;

   }
       mid=(first+last)/2;
   
   }
   return -1;
   }
   int main(){
      int key;
      int arr[10]={0,1,2,3,4,5,6,7,8,9};
      cout<<"Enter key to search:";
      cin>>key;
      int index=binary(arr,key,10);
      cout<<"Present at index:"<<index<<endl;
   }