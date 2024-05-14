#include<iostream>
using namespace std;
int power(int A,int B){
   
        // if(B==0){
        //     return 1;
        // }
        // else if(B==1){
        //     return A;
        // }
        int ans=1;
        if(B>1){
            for(int i=0;i<B;i++){
                ans=ans*A;
            }   
              return ans;
        }
      
    }


int main(){
    int a,b;
    cout<<"A:";
    cin>>a;
    cout<<endl<<"B:";
    cin>>b;
    int c= power(a,b);
    cout<<"result: "<<c;
}