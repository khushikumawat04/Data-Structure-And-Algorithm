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
Node* createLinkedList(int arr[], int index, int size){
    if(index==size){
        return NULL;

    }
    Node* temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;  
}
//make cycle
void makeCycle(Node* &head, int pos){
	Node* temp = head;
	Node* startNode;
	int count =1;
	while(temp->next!=NULL){
		if(count==pos){
			startNode = temp;
		}
		temp = temp->next;
		count++;
	}
	temp->next= startNode;
}

//Detect cycle using slow and fast pointer - time - O(n) space - O(1);
bool detectcycle(Node* head){
	 Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
//Detect cycle using vector - time -O(n2) space - O(n)
   bool check(vector <Node*> visited, Node* curr){
       for(int i=0;i<visited.size();i++){
           if(visited[i] == curr){
               return true;
           }
       }
       return false;
   }
    bool detectLoop(Node* head) {
        // your code here
   Node* curr = head;
 vector <Node*> visited;
    while(curr!=NULL){
       if(check(visited,curr)){
            return true;
          }
      visited.push_back(curr);
         curr = curr->next;
          
     }
      return false;
  }
  
//  remove cycle
void removeCycle(Node* &head){
	Node* slow = head;
	Node* fast = head;
	do{
		slow = slow->next;
		fast = fast->next->next;
	}while(slow!=fast);
	slow = head;
	while(slow->next != fast->next){
	slow= slow->next;
	fast = fast->next;
}
fast->next = NULL;
}

int main()
{
 Node* Head = NULL;
 int arr[] = {1,2,3,4,5};
 int size = sizeof(arr)/sizeof(arr[0]);
 Head = createLinkedList(arr,0,size);
 makeCycle(Head,3);
  removeCycle(Head);
 bool result = detectLoop(Head);
 if(result){
 	cout<<"Loop exist in Linked list";
 }
 else{
 	cout<<"No Loop exist";
 }
 cout<<endl;

 bool r = detectcycle(Head);
 if(result){
 	cout<<"Loop exist in Linked list";
 }
 else{
 	cout<<"No Loop exist";
 }
 
 

    return 0;
}


