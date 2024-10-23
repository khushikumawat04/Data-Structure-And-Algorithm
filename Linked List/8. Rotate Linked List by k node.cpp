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

Node* rotateByK(Node* head, int k){
	if(head==NULL || head->next==NULL){
            return head;
        }
       Node* temp = head;
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        
         k = k % count;
    if (k == 0) {
        return head; // No need to rotate if k is a multiple of count
    }
        
        
        count-=k;
      Node* prev = NULL;
       Node* curr = head;
        while(count--){
            prev = curr;
            curr= curr->next;
        }
    prev->next = NULL;
    Node* tail = curr;
    while(tail->next!=NULL){
        tail= tail->next;
    }
    tail->next = head;
    head = curr;
    return head;
	
}



int main(){
	Node* Head = NULL;
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	Head = CreateList(arr,0,size);
	printList(Head);
	cout<<"After Rotate"<<endl;
	Head = rotateByK(Head,3);
	printList(Head);
	
	return 0;
}
