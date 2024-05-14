   #include<iostream>
   using namespace std;
   int firstindex(int arr[],int key,int size){
   int n=size;
   int first=0;
   int last=n-1;
   int ans=-1;
   int mid=first+(last-first)/2;
   while(first<=last){
   if (arr[mid]==key){
    ans=mid;
    last=mid-1;
   }
   if(arr[mid]>key){
      last=mid-1;
   }
   if(arr[mid]<key){
      // else{
      first=mid+1;

   }
    mid=first+(last -first)/2;
   
   }
   return ans;
   }

   int lastindex(int arr[],int key,int size){
   int n=size;
   int first=0;
   int last=n-1;
   int ans=-1;
   int mid=first+(last-first)/2;
   while(first<=last){
   if (arr[mid]==key){
    ans=mid;
    first=mid+1;
   }
   else if(arr[mid]>key){
      last=mid-1;
   }
  else if(arr[mid]<key){
 
      first=mid+1;

   }
    mid=first+(last -first)/2;
   
   }
   return ans;
   }
   int main(){
      int key;
      int arr[8]={0,0,1,1,2,2,2,2};
      cout<<"Enter key to search:";
      cin>>key;
      int start=firstindex(arr,key,8);
      int end=lastindex(arr,key,8);
      cout<<"Present at index:"<<start<<"\n"<<end<<endl;
      
      
      
   }