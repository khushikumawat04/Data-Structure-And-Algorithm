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
int main()
{
    Node* head = NULL;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // insertion at start
    for(int i=0;i<n;i++){
        
        Node* newnode = new Node(arr[i]);
        if(head==NULL){
            head=newnode;
        }
        else{
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        }
    }
    
printList(head);

    return 0;
}
