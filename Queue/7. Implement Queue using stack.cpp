

#include <iostream>
#include <stack>
using namespace std;
class MyQueue {
    stack <int> st1;
stack <int> st2;
public:

    MyQueue() {
        
    }
     bool empty() {
        return st1.empty() && st2.empty();
        
    }
    
    void push(int x) {
        cout<<x<<" pushed to stack"<<endl;
        st1.push(x);
        
    }
    
    void pop(){
        if(empty()){
            return;
        }
        else if(!st2.empty()){
            
            st2.pop();
      
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
           
            st2.pop();
            
        }
        
    }
    
    int peek(){
            if(empty()){
            return 0;
        }
        else if(!st2.empty()){
            int elem = st2.top();
            
            return elem;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int elem = st2.top();
            
            return elem;
        }
    }
    
   
};


int main()
{
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    cout<<q.peek();
    
   

    return 0;
}
