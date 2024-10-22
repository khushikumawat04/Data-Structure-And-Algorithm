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
Node* createLinkedList(int arr[], int index, int size){
    if(index==size){
        return NULL;

    }
    Node* temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
    
    
}

int main()
{
 Node* Head = NULL;
 int arr[] = {1,2,3,4,5};
 int size = sizeof(arr)/sizeof(arr[0]);
 Head = createLinkedList(arr,0,size);
 
//  insertat particular position
int index = 2;
int value= 10;
Node* temp1 = Head;
index--;
while(index--){
    temp1 = temp1->next;
  
}
Node *newnode = new Node(value);
newnode->next = temp1->next;
temp1->next = newnode;
 
 
//  print list

Node* temp = Head;
while(temp!=NULL){{
    cout<<temp->val<<"->";
    temp = temp->next;
}
    
}
    return 0;
}

//......Time Complexity: O(n)
//Every element in the array is processed exactly once,
// making the time complexity linear with respect to the number of elements.

//....Space Complexity: O(n)
//Due to recursion, a new function call is added to the call stack for each element, 
//leading to O(n) space usage for the recursion.
