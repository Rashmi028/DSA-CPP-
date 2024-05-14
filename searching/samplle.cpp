   #include<iostream>
   using namespace std;
   int mid;
   int binary(int arr[],int key,int size){
    int ans=-1;
   int n=size;
   int first=0;
   int last=n-1;
   mid=first+(last-first)/2;
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
       mid=first+ (last-first)/2;
   
   }
   return ans;
   }
   int counting(int arr[],int size){
    int count=0;
    for(int i=mid; i<size && arr[i]==arr[mid];i++){
      count++;
 
    }
       return count;
    
   }

   int main(){
      int key;
      int arr[14]={0,0,1,1,1,2,2,2,2,2,3,3,3,3};
      cout<<"Enter key to search:";
      cin>>key;
      int index=binary(arr,key,14);
      cout<<"Present at index:"<<index<<endl;
     int digit= counting(arr,14);
     cout<<"no. of times:"<<digit;
      
   }
   