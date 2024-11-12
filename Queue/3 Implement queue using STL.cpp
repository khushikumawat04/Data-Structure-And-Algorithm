
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;
//.........push
 q.push(1);
  q.push(2);
  q.push(3);
  
// ......pop
  q.pop();
  
//.....front
cout<<q.front()<<endl;

//......back
cout<<q.back()<<endl;

//......empty
cout<<q.empty()<<endl;

//........size
cout<<q.size()<<endl;
    return 0;
}
