#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
void printList(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
//create linked list
Node* CreateList(int arr[],int index, int size, Node* back){
if(index==size){
    return NULL;
}
Node* newnode = new Node(arr[index]);
newnode->prev = back; 

newnode->next = CreateList(arr,index+1,size, newnode);
return newnode;
}


void insertAtPosition(Node* &Head, int pos, int val){

    Node* newnode = new Node(val);
   
    // insert at start
    if(pos==0){
        if(Head==NULL){
            Head=newnode;
        }
        else{
            newnode->next = Head;
            Head->prev = newnode; 
            Head= newnode;
        }
    }
    else{
     pos--;
    Node* curr = Head;
    while(pos--){
        curr = curr->next;
    }
    // insert at end
    if(curr->next==NULL){
        curr->next = newnode;
        newnode->prev = curr;
    }
    // insert at middle
    else{
        newnode->next = curr->next;
    newnode->prev = curr;
    curr->next =  newnode;
    newnode->next->prev = newnode;
    }
    }   
}
int main()
{
    Node* head = NULL;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
   head= CreateList(arr,0,n,NULL);
   insertAtPosition(head,2,20);
    
printList(head);

    return 0;
}
