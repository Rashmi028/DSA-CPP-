#include <bits/stdc++.h>
using namespace std;
int main(){
int x,n,people;
cin>>people;

for(int i=0;i<people; i++){
cin>>x>>n;
int left=x%n;
cout<<left<<"\n";

}
// for(int i=0;i<people; i++){
// int left=x%n;
// cout<<left<<"\n";}
return 0; }