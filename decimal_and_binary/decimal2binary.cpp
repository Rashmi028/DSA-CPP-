#include<iostream>
using namespace std;
void binary_reverse(int num){
    int k[100];
    int i=0;
    while(num!=0){
      k[i]=num % 2;
        num=num/2;
        i++;  
    }
    cout<<endl;
      for(int j=i-1;j>=0;j--){
        cout<<k[j];
      }
      

}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    binary_reverse(n);
    
}