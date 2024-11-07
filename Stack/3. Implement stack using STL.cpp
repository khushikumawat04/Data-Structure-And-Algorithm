

#include <iostream>
#include <stack>
using namespace std;


int main()

{
stack <int> s;
// push
s.push(1);
s.push(2);
s.push(3);
// pop
s.pop();
// top
cout<<s.top()<<endl;;
// size
cout<<s.size()<<endl;
// empty
cout<<s.empty()<<endl;

    return 0;
}
