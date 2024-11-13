

#include <iostream>
#include <queue>
using namespace std;
class MyStack {
public:
queue <int> q1;
queue <int> q2;
    MyStack() {
        
    }
     bool empty() {
        return q1.empty() && q2.empty();
    }
    
    void push(int x){
        if(empty()){
            q1.push(x);
        }
        else if(q1.empty()){
            q2.push(x);
        }
        else{
            q1.push(x);
        }
        
    }
    
    int pop() {
        if(empty()){
            return 0;
        }
        else if(q1.empty()){
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            int elem = q2.front();
            q2.pop();
            return elem;
        }
        else{
            while(q1.size()>1){
                 q2.push(q1.front());
                q1.pop();
            }
            int elem = q1.front();
            q1.pop();
            return elem;

        }     
    }
    
    int top() {
        if(empty()){
            return 0;
        }
        else if(q1.empty()){
            return q2.back();
        }
        else{
            return q1.back();

        }
        
    }
    
   
};


int main()
{
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.pop();
    cout<<s.top();
    
   

    return 0;
}
