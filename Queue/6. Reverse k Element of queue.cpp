
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
 queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack <int> st;
        // 1 .push first k elemtn to stack
        while(k--){
            st.push(q.front());
            q.pop();
        }
        // 2. store size of queue
        int n= q.size();
        // 3. push all element of stack to queue 
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        // 4. push first elemnt of queue at last
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
        
    }

int main()

{
    queue <int> q;
    q.push(1);
     q.push(2);
      q.push(3);
       q.push(4);
   queue <int> res = modifyQueue(q,2);
   while(!res.empty()){
           cout<<res.front()<<" ";
            res.pop();
        }

    return 0;
}
