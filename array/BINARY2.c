// #include <iostream>
// using namespace std;
// int binarysearch(int arr[],int size,int key){
//  int start=0;
//  int end=size-1;
//  int mid=(start+end)/2;
//  while(start>=end){
//     if(arr[mid]==key){
//         return mid;
//     }
//     if(arr[mid]<key){
//         start=mid+1;
//     }
//     else{
//         end=mid-1;
//     }
//   mid=(start+end)/2;
//  }
//  return -1;
// }
// int main(){
//     int key;
//     int arr[6]={3,5,14,19,20,23};
//     cout<<"Enter key:";
//     cin>>key;
//     int index=binarysearch(arr,6,key);
//    if(index==1){
//     cout<<"present";
//    }
//    else{
//     cout<<"not present";
//    }
// }
#include<stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* AddTwoNumbers(struct Node* list1, struct Node* list2) {
    struct Node* result = NULL;
    struct Node** tail = &result;
    int carry = 0;
    
    while (list1 || list2 || carry) {
        int sum = carry;
        if (list1) {
            sum += list1->data;
            list1 = list1->next;
        }
        if (list2) {
            sum += list2->data;
            list2 = list2->next;
        }
        carry = sum / 10;
        sum = sum % 10;
        *tail = malloc(sizeof(struct Node));
        (*tail)->data = sum;
        (*tail)->next = NULL;
        tail = &((*tail)->next);
    }
    
    return result;
}
int main(){
    int arr1[5]={2,4,6,10,12};
    int arr2[5]={3,6,7,12,14,15};
    AddTwoNumbers(arr1,arr2);
    
}