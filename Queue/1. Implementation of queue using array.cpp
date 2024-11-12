


#include <iostream>
using namespace std;
class queue{
    int  *arr;
    int front,back;
    int size;
    
    public:
    queue(int n){
        arr = new int[n];
        front = -1;
        back = -1;
        size = n;
    }
    // push
    void push(int value){
        if(back == size-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        back++;
        arr[back]=value;
        cout<< arr[back]<<" push to queue"<<endl;
        if(front==-1){
            front++;
        }
    }
    // pop
    void pop(){
        if(front==-1 || front>back){
            cout<<"No elemnet to pop"<<endl;
            return;
        }
        cout<<arr[front]<<" pop from queue"<<endl;
        front++;
    }
    // peek()
    int peek(){
        if(front==-1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
        
        
    }
    // isEmpty()
    bool isEmpty(){
       	if(front==-1 || front>back){
			
				return true;
			}
			return false;
			
		}
    
     
    
};

int main()
{
 queue q(3);
 q.push(1);
  q.push(2);
  q.push(3);
   
      q.pop();
      
  cout<<q.peek()<<endl;
  cout<<q.isEmpty()<<endl;

    

    return 0;
}
