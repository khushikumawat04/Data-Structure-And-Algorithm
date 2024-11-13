#include <iostream>
#include <deque>
using namespace std;

int main()

{
    deque <int> d;
//   push front
    d.push_front(1);
    d.push_front(2);
    
    // push back
    d.push_back(3);
    d.push_back(4);
    
    // pop front
    d.pop_front();
    
    // pop back
    d.pop_back();
    
    // front
    cout<<d.front()<<endl;
    // back
    cout<<d.back()<<endl;
   
    return 0;
}
