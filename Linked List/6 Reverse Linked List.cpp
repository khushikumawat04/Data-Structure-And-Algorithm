#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int val;
    Node*  next;
    Node(int data){
        val=data;
        next=NULL;
    }
};

// insert Node
Node* createList(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    
    Node *newnode = new Node(arr[index]);
    newnode->next = createList(arr,index+1,size);
    return newnode;
}

// print list
void printList(Node* &Head){
    Node* temp = Head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

// reverse node of list 
Node* reverse(Node* Head){
    Node* prev = NULL;
    Node* curr = Head;
    Node* nextptr;
    while(curr){
        nextptr = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = nextptr;
    }
    return prev;
}

// reverse linked  value of list using vecor
Node* Reversevalue(Node* Head){
  vector <int> list;
        Node* temp = Head;
        while(temp){
            list.push_back(temp->val);
            temp = temp->next;
        }
        int i = list.size()-1;
        temp = Head;
        while(temp){
            temp->val = list[i];
            i--;
            temp= temp->next;
        }
        return Head;
}


int main()
{
    Node *Head = NULL;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    Head = createList(arr,0,size);
    printList(Head);
    //..........reverse Node.......
    // Head = reverse(Head);
    //..............reverse value...........
    Head = Reversevalue(Head);
    printList(Head);
   

    return 0;
}
