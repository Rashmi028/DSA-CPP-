#include<iostream>
using namespace std;
void printmax(int num[5]);
void printmin(int num[5]);
int main(){
    int num[5]={10,23,43,54,24};
    printmax(num);
    printmin(num);
}
void printmax(int num[5]){
    int i;
   int max=num[0];
   for(i=0;i<5;i++){
    if (max<num[i])
    {
        max=num[i];
    }
    
   }
   cout<<"Maximum element:"<<max<<"\n";
   
}
void printmin(int num[5]){
    int i;
   int min=num[0];
   for(i=0;i<5;i++){
    if (min>num[i])
    {
        num[i]=min;
    }
    
   }
   cout<<"Minimum element:"<<min;
   
}

