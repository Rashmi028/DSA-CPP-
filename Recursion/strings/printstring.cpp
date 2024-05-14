#include<iostream>
using namespace std;
string  printno(string num){

 for(int i =1;i<num.length()-1;i++){
     cout<<num[i];
    }
}
int main(){
    string x;
    cout<<"Enter string:";
    cin>>x;
    printno(x);

    cout<<endl;

}