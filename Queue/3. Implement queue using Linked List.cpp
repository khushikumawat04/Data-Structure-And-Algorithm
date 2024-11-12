
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class queue{
    Node* front;
    Node* rear;
    public:
    queue(){
        front = rear = NULL;
    }
    // isEmpty
    bool isEmpty(){
        return front==NULL;
    }
    // push
    void push(int val){  
        Node* newnode = new Node(val);
        if(isEmpty()){
            front = newnode;
            rear = front;
            cout<<newnode->data<<" pushed to stack"<<endl;
            return;
        }
        else{
            cout<<newnode->data<<" pushed to stack"<<endl;
            rear->next = newnode;
            rear = rear->next;
        }
    }
    
    // ....pop
    void pop(){
        if(isEmpty()){
            cout<<"queue is isEmpty"<<endl;
            return;
        }
        else{
            Node* temp = front;
            cout<<temp->data<<" popped from queue"<<endl;
            front = front->next;
            delete temp;
        }
    }
    
    // .......... peek;
    int peek(){
         if(isEmpty()){
            cout<<"queue is isEmpty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
    
    
};

int main()
{
 queue q;
 q.push(1);
  q.push(2);
  q.push(3);
 
   
      q.pop();
     
      
  cout<<q.peek()<<endl;


    

    return 0;
}
