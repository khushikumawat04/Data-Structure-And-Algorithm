#include <iostream>
#include <deque>
using namespace std;

class stack{
     deque <int> d;
     
     public:
     void push(int x){
         d.push_back(x);
     }
     void pop(){
         d.pop_back();
     }
     int top(){
         return d.back();
     }
    
};

class queue{
    deque <int> d;
     public:
     void push(int x){
         d.push_back(x);
     }
     void pop(){
         d.pop_front();
     }
     int front(){
         return d.front();
     }
     int back(){
         return d.back();
     }
    
};

int main()

{
    
    cout<<"-----stack-----"<<endl;
    stack s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.pop();
   cout<<s.top()<<endl;
   
   cout<<"-----Queue-----"<<endl;
    queue q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.pop();
   cout<<q.front()<<endl;
   cout<<q.back()<<endl;
   
    return 0;
}
