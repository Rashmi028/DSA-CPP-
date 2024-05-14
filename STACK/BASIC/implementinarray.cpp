// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//     int *arr;
//     int top;
//     int size;
//     Stack(int size){
//         this->size=size;
//         top=-1;
//         arr=new int[size];
//     }
//     void pop(){
//      if(top!=-1){
//         top--;
//      }
//      else{
//         cout<<"Stack underflow"<<endl;
//      }
//     }
//     void push(int element){
//      if (size-top>1){
//         top++;
//         arr[top]=element;
//      }
//      else{
//         cout<<"Stack overflow"<<endl;
//      }
//     }

//     bool isempty(){
//       if(top==-1){
//         return true;
//       }
//       else{
//         return false;
//       }
//     }

//    int peek(){
//     if(top>=0)    {
//        return arr[top];
//     }
//     else{
//         cout<<"Stack is empty"<<endl;
//         return -1;
//     }
//     }
// };

//   int main(){
//         Stack st(5);
//         st.push(33);
//         st.push(54);
//         st.push(43);
//         cout<<st.peek()<<endl;
//         st.pop();
//         cout<<st.peek()<<endl;
//         cout<<st.isempty()<<endl;
//     }
#include<iostream>
using namespace std;
int main()
{
	//Write code here 
	int T,P,X,R1,N,Y,R2;
    int time1,time2;
    cin>>T;
	for(int i=0;i<T;i++){
		cin>>P>>X>>R1;
		cin>>N>>Y>>R2;
	}
}