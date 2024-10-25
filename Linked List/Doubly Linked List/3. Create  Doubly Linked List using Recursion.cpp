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

void printList(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

Node* CreateList(int arr[],int index, int size, Node* back){
if(index==size){
    return NULL;
}
Node* newnode = new Node(arr[index]);
newnode->prev = back; 

newnode->next = CreateList(arr,index+1,size, newnode);
return newnode;
}
int main()
{
    Node* head = NULL;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
   head= CreateList(arr,0,n,NULL);
    
printList(head);

    return 0;
}
