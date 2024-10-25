
#include <iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node* prev;
  Node(int data){
      val = data;
      next=prev=NULL;
  }
};
Node* CreateList(int arr[], int index, int size, Node* back){
    if(index==size){
        return NULL;
    }
    Node* newnode = new Node(arr[index]);
    newnode->prev = back;
    newnode->next = CreateList(arr,index+1,size,newnode);
    return newnode;
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
// delete at start
void DeletionAtstart(Node* &head){
    if(head!=NULL){
        
        // if one node exist
        if(head->next==NULL){
            delete head;
            head = NULL;
        }
        // if more than one node exist
        else{
            Node* temp = head;
        head = temp->next;
            head->prev = temp;
        delete temp; 
        }
       
    }
    cout<<"After deletion at start"<<endl;
}
// deletion at endl
void DeletionAtend(Node* &head){
    Node* temp = head;
   
    if(head!=NULL){
        // if one node exist
        if(head->next==NULL){
            delete head;
            head = NULL;
        }
        // if more than one node exist
        else{
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->prev->next = NULL;
    delete temp;}
    }
    cout<<"After deletion at end"<<endl; 
}

void Deletion(Node* &Head, int pos){
//	delete at start
if(pos==1){
	 // if one node exist
        if(Head->next==NULL){
            delete Head;
            Head = NULL;
        }
        // if more than one node exist
        else{
            Node* temp = Head;
        Head = temp->next;
            Head->prev = temp;
        delete temp; 
        }
	
	
}
else{
	Node* curr = Head;
	pos--;
	while(pos--){
		curr = curr->next;
	} 
//delete at end
if(curr->next==NULL){
	curr->prev->next = NULL;
	delete curr;
}
//delete at middle
else{
	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	delete curr;
}
}

}
int main()
{
    
    Node* Head = NULL;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    Head = CreateList(arr,0,size,NULL);
    
    print(Head);
    
    // DeletionAtstart(Head);
//    DeletionAtend(Head);
Deletion(Head,1);
     print(Head);

    return 0;
}
