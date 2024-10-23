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
Node* CreateList(int arr[],int index, int size){
	if(index==size){
		return NULL;
	}
	Node* newnode = new Node(arr[index]);
	newnode->next=CreateList(arr,index+1,size);
	return newnode;
}
void printList(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp= temp->next;
	}
	cout<<endl;
}

//Find Midle of Linked List 
// -Since both loops run in O(n),

Node* Middle(Node* &Head){
	Node* temp = Head;
	int count = 0;
	while(temp!=NULL){
		count++;
		temp = temp->next;		
	}
	int mid = count/2;
	temp=Head;
	while(mid--){
		temp = temp->next;
	}
	return temp;
}


//Midlle of Linked list using slow and fast pointer
Node* MiddleofList(Node* Head){
	 Node* slow = Head;
	 Node* fast = Head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
	Node* Head = NULL;
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	Head = CreateList(arr,0,size);
//	find middle
Node* middle = Middle(Head);
cout<<"Middle of Linked List is: "<<middle->val<<endl;

Node* middlelist = MiddleofList(Head);
cout<<"Middle of Linked List is: "<<middlelist->val<<endl;

	printList(Head);
	
	return 0;
}
