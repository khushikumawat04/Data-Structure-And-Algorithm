#include <iostream>
using namespace std;


class deque{
   int front;
   int rear;
   int size;
   int *arr;
    public:
    deque(int n){
       size = n;
       front = rear = -1;
       arr = new int[n];
    }
    
    // isEmpty
    bool Empty(){
        return front==-1;
        
    }
    
    // isfull
    bool isFull(){
        return (rear+1)%size == front;
    }
    
    // push-front
    void push_front(int val){
        if(Empty()){
            front=rear = 0;
            arr[0]=val;
            return;
        }
        else if(isFull()){
            cout<<"deque Overflow"<<endl;
            return;
        }
        else{
            front = (front-1+size)%size;
            arr[front] = val;
            cout<<arr[front]<<" pushed to deque"<<endl;
            
        }
        
       
    }
    
    // push_back
    void push_back(int val){
       if(Empty()){
            front=rear = 0;
            arr[0]=val;
            cout<<arr[0]<<" pushed to deque"<<endl;
            return;
        }
        else if(isFull()){
            cout<<"deque Overflow"<<endl;
            return;
        }
        else{
            rear = (rear+1)%size;
            arr[rear]=val;
            cout<<arr[rear]<<" pushed to deque"<<endl;
        }
    }
    
    // pop_front
    void pop_front(){
        if(Empty()){
            cout<<"deque Underflow"<<endl;
            return;
        }
        else{
             if(front==rear){
                 cout<<arr[front]<<"popped from deque"<<endl;
                front =rear =-1;
            }
            else{
               cout<<arr[front]<<"popped from deque"<<endl;
               front = (front+1)%size; 
            }
            
        }
        
    }
    
    // pop_back
    void pop_back(){
         if(Empty()){
            cout<<"deque Underflow"<<endl;
            return;
        }
        else{
             if(front==rear){
                 cout<<arr[front]<<"popped from deque"<<endl;
                front =rear =-1;
            }
            else{
               cout<<arr[rear]<<"popped from deque"<<endl;
               rear = (rear-1+size)%size; 
            }
            
        }
      
    }
    
    // start
    int start(){
        if(Empty()){
            return -1;
        }
        return arr[front];
    }
    
    // endl
    int end(){
         if(Empty()){
            return -1;
        }
        return arr[rear];
    }
    
};


int main()
{
    deque d(4);
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
