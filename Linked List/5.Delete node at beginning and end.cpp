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
//Delete Node At Begining - Time Complexity: O(1)
void deleteAtHead(Node* &Head){
	if(Head!=NULL){
		Node *Dnode = Head;
	Head = Head->next;
	delete Dnode;
	}
	
}
//Delete Node At end - Time Complexity: O(n)
void deleteAtEnd(Node* &Head){
	if(Head->next==NULL){
		deleteAtHead(Head);
		return;
	}
	if(Head!=NULL){
		Node* curr = Head;
		Node* prev= NULL;
		while(curr->next!=NULL){
				prev = curr;
			curr = curr->next;
		
		}
		prev->next= curr->next;
		delete curr;	
	}	
}

// Delete at index -  Time Complexity: O(n)
void DeleteAtIndex(Node* &Head, int index){
	if(index==1){
		Node * temp = Head;
		Head = Head->next;
		delete temp;
		return;
	}
	Node *curr = Head;
	Node* prev = NULL;
	
	index--;
	while(index--){
		prev=curr;
		curr= curr->next;
	}
	prev->next = curr->next;
	delete curr;
}

//Delete without head pointer - Time Complexity: O(1)
void DeletewithoutHead(Node* curr){
	Node *temp = curr->next;
	curr->val = temp->val;
	curr->next= temp->next;
	delete temp;
}
//create  - Time Complexity: O(n)
Node* createLinkedList(int arr[],int index,int size){
	if(index==size){
		return NULL;
	}
	Node* newnode  = new Node(arr[index]);
	newnode->next= createLinkedList(arr,index+1,size);	
	return newnode;
}
//print linked list - Time Complexity: O(n
void Print(Node* &Head){
	Node *temp = Head;
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp = temp->next;
	}
}
int main(){
	Node* Head = NULL;
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	Head = createLinkedList(arr,0,size);
	deleteAtHead(Head);
	deleteAtEnd(Head);
DeleteAtIndex(Head,1);

// .....Find the node to delete (e.g., let's delete node with value 3)
    Node* nodeToDelete = Head->next->next->next; // Pointer to node with value 3
    DeletewithoutHead(nodeToDelete);
    
//    print linked list
	Print(Head);
	
	
}
