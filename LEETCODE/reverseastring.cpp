   #include<iostream>
  using namespace std;
  int main(){
    char s[5]= ["h","e","l","l","o"];
    int n=5;
   int a=0;
        int z=n-1;
        while(a!=z){
        swap(s[a],s[z]);
        a++;
        z--;
        }
        cout<<s[a];
  }