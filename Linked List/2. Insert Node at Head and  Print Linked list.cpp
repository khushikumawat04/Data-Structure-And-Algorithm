#include <iostream>
using namespace std;
class Node{
   public: 
   int val;
   Node* next;
   Node(int data){
       val = data;
       next = NULL;
   }
};
int main()
{
    Node *Head = NULL;
    // insert Node at beggining
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
          Node* n = new Node(arr[i]);
        if(Head==NULL){
        Head = n;
    }
    else{
        n->next = Head;
        Head = n;
    }
    }
    
    // print Linked List
  Node* temp = Head;
  while(temp!=NULL){
      cout<<temp->val<<"->";
      temp = temp->next;
  }
    
   


    return 0;
}
