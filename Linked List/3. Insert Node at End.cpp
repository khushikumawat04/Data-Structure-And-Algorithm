

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

bool search(Node* Head, int key){
    Node* temp = Head;
    while(temp!=NULL){
        if(temp->val==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *Head = NULL;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // insert Node at end;
    Node* tail = NULL;
    for(int i=0;i<n;i++){
        Node* newnode = new Node(arr[i]);
        
        if(Head==NULL){
            Head = newnode;
            tail = Head;
        }
        else{
            // Node* tail = Head;
            // while(tail->next!=NULL){
            //     tail = tail->next;
            // }
            tail->next = newnode;
            tail = tail->next;
        }
        
    }
    
    // print
    Node *temp = Head;
    while(temp!=NULL){
       cout<<temp->val<<"->";
       temp = temp->next;
    }

// searching 
cout<<endl;
bool result = search(Head,4);
if(result){
    cout<<"Key Found";
}
else{
    cout<<"key not found";
}
    
    return 0;
}
