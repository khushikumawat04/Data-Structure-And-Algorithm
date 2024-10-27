#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data = val;
			next=NULL;
		}
	
};
//	insert at start 
void InsertatHead(Node* &Head, int arr[], int size){
	for(int i=0;i<size;i++){
		Node* n = new Node(arr[i]);
		if(Head==NULL){
			n->next = n;
			Head = n;
					
		}
		else{
		Node* temp = Head;
	while(temp->next!=Head){
		temp = temp->next;	
}
temp->next = n;
n->next = Head;
Head = n;
			
		}
	}
}

//print circular linked list
void printList(Node* Head){

		Node* temp = Head;
	do{
		cout<<temp->data<<" ";
		temp= temp->next;
	}while(temp!=Head);
	cout<<endl;
}
int main(){

int arr[] = {1,2,3,4,5};
int size = sizeof(arr)/sizeof(arr[0]);
Node* Head = NULL;
InsertatHead(Head,arr,size);
printList(Head);

	return 0;
}
