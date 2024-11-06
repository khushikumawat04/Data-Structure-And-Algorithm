#include <iostream>
using namespace std;
class Node{
     public:
    int value;
    Node * next;
   
    
    Node(int data){
    value = data;
    next = NULL;
    }
    
};
class Stack{
    int size;
    Node* top;
    public:
    Stack(){
        top = NULL;
        size = 0;
    }
    // push
    void push(int value){
        Node* newnode = new Node(value);
        if(newnode==NULL){
            cout<<"stack overflow"<<endl;
        }
        newnode->next = top;
        top = newnode;
        cout<<value<<" Pushed to stack"<<endl;
        size++;
    }
    // pop
    void pop(){
        Node* temp = top;
        if(temp==NULL){
            cout<<"Stack is empty";
            return;
        }
        else{
         cout<<top->value<<" pop from Stack"<<endl;
        top = top->next;
         delete temp;
        size--;
       
       
        }
    }
    // peek
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty";
            return -1;
        }
        else{
            return top->value;
        }
    }
    // isEmpty
    bool isEmpty(){
        return top==NULL;
    }
    // isSize
    int isSize(){
         if(top==NULL){
            cout<<"Stack is empty";
            return -1;
        }
        else{
            return size;
        }
    }
};
int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.pop();
  s.pop();
  cout<<s.peek()<<endl;;
  cout<<s.isSize()<<endl;
  cout<<s.isEmpty()<<endl;
  

    return 0;
}
