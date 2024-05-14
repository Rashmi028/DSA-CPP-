// #include<iostream>
// using namespace std;
// void reverse(int arr[],int n){
//    int a,b,temp;
   
//     a=arr[0];
//     b=arr[n-1];
  
//     for(int i=0;i<=n;i++){
//     a=arr[i];
//     b=arr[n-1];
//     // temp=a;
//     // a=b;
//     // b=temp;
//     cout<<a<<"\t"<<b;
//     // arr[i]=arr[i+1];
//     // b=arr[n-i+2];
//     }
    
//     // for (int i=0;i<n;i++){
//     //     for(int j=n-1;j<=0;j--){
//     //         int temp=arr[i];
//     //         arr[i]=arr[j];
//     //         arr[j]=temp;
//     //         cout<<arr[j]<<"\t";
//     //     }
//     //     cout<<arr[i]<<"\t";
        
//     }


// int main(){
//     int arr[5]={2,4,5,3,6};
//     // temp=a;
//     // a=b;
//     // b=temp;
//     // cout<<"a:"<<a<<"\n"<<"b:"<<b;
//     reverse(arr,5);
// }
#include<iostream>
using namespace std;

void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);


    return 0;
}