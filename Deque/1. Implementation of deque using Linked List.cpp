#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data = value;
        next = NULL;
        prev  = NULL;
    }
    
};

class deque{
    Node* front;
    Node* rear;
    public:
    deque(){
        front = NULL;
        rear = NULL;
    }
    
    // push-front
    void push_front(int val){
        Node* newnode = new Node(val);
        if(front==NULL){
            front=rear=newnode;
            cout<<front->data<<" push front to deque"<<endl;
            return;
        }
        else{
            newnode->next = front;
            front->prev = newnode;
            front = newnode;
             cout<<front->data<<" push front to deque"<<endl;
            return;
        }
    }
    
    // push_back
    void push_back(int val){
         Node* newnode = new Node(val);
        if(front==NULL){
            front=rear=newnode;
            cout<<rear->data<<" push back to deque"<<endl;
            return;
        }
        else{
            rear->next = newnode;
            newnode->prev = rear;
            rear = rear->next;
            cout<<rear->data<<" push back to deque"<<endl;
            return;
        }
    }
    
    // pop_front
    void pop_front(){
        if(front==NULL){
            return;
        }
        else{
            Node* temp = front;
            cout<<temp->data<<" Popped from deque"<<endl;
            front = front->next;
            delete temp;
            if(front){
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
    }
    
    // pop_back
    void pop_back(){
        if(front==NULL){
            return;
        }
        else{
            Node* temp = rear;
            cout<<temp->data<<" Popped from deque"<<endl;
            rear = rear->prev;
            delete temp;
            if(rear){
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }
    }
    
    // start
    int start(){
        if(front==NULL){
            return -1;
        }
        return front->data;
    }
    
    // endl
    int end(){
         if(front==NULL){
            return -1;
        }
        return rear->data;
    }
    
};


int main()
{
    deque d;
    d.push_front(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    d.pop_front();
    d.pop_back();
    cout<<d.start()<<endl;
    cout<<d.end()<<endl;
   
    return 0;
}
