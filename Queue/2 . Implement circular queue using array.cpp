
#include <iostream>
using namespace std;
class cqueue{
    int  *arr;
    int front,back;
    int size;
    
    public:
    cqueue(int n){
        arr = new int[n];
        front = -1;
        back = -1;
        size = n;
    }
    // push
    void push(int value){
        if((back+1)%size == front){
            cout<<"stack overflow"<<endl;
            return;
        }
        back = (back+1)%size;
        arr[back]=value;
        cout<< arr[back]<<" push to queue"<<endl;
        if(front==-1){
            front++;
        }
    }
    // pop
    void pop(){
        if(front==-1 ){
            cout<<"No elemnet to pop"<<endl;
            return;
        }
       cout << arr[front] << " popped from queue" << endl;
        if (front == back) { // Queue becomes empty
            front = -1;
            back = -1;
        } else {
            front = (front + 1) % size;
        }
        
    }
    // peek()
    int peek(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
        
        
    }
    // isEmpty()
    bool isEmpty(){
       	if(front==-1){
			
				return true;
			}
			return false;
			
		}
    
     
    
};

int main()
{
 cqueue q(3);
 q.push(1);
  q.push(2);
  q.push(3);
 
   
      q.pop();
      q.pop();
      q.pop();
      q.pop();
      
  cout<<q.peek()<<endl;
  cout<<q.isEmpty()<<endl;

    

    return 0;
}
