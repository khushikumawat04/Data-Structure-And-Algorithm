#include <iostream>
#include <vector>
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

 bool isPalindrome(Node* head) {
    Node* temp = head;
    vector<int> arr;
    
    while (temp) {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    int start = 0;
    int end = arr.size() - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;  // Not a palindrome
        }
        start++;
        end--;
    }
    return true;      
}


int main(){
	Node* Head = NULL;
	int arr[] = {1,2,3,2,1,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	Head = CreateList(arr,0,size);
	printList(Head);
	bool result = isPalindrome(Head);
	if(result){
		cout<<"yes";
	}
	else{
		cout<<"No";
	}

	
	return 0;
}
