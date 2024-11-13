
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    queue <int> q;
//.........push
 q.push(1);
  q.push(2);
  q.push(3);
   q.push(4);
  q.push(5);
  
  
//   print all elemnt using vector
vector <int> temp;
while(!q.empty()){
      cout<<q.front()<<" ";
       temp.push_back(q.front());
      q.pop();
}
for(int i=0;i<temp.size();i++){
    q.push(temp[i]);
}

cout<<endl;
  
  int n = q.size();
//   time - O(N)  space - O(1)
//   print all elemnt  without using vector(extra space)
   while(n--){
      cout<<q.front()<<" ";
      q.push(q.front());
       q.pop();
  }

    return 0;
}
