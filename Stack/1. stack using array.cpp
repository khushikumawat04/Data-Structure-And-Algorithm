
#include <iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
       public:
    Stack(int s){
        size = s;
      
        top = -1;
          arr = new int[s];
    }
 
    // push operation
    void push(int value){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = value;
            cout<<arr[top]<<" pushed to stack"<<endl;
        }
    }
    // pop operation
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
             cout<<endl;
            cout<<arr[top]<<" poped from stack"<<endl;
            top--;
            
        }
    }
    // Peack operation;
    int peek(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        else{
             return arr[top];
            
        }
    }
    bool isEmpty(){
        return top == -1;
    }
    int isSize(){
        cout<<endl<<"stack size is: ";
        return top+1;
        
        
    }
};


int main()
{
    Stack s(5);
      cout<<s.isEmpty();
      cout<<endl;
    s.push(1);
     s.push(2);
     s.push(3);
      cout<<s.peek();
      s.pop();
      cout<<s.peek();
      cout<<s.isSize();
      cout<<endl;
    


    return 0;
}
