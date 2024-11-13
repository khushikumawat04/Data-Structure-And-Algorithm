
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
 queue<int> rev(queue<int> q)
    
    {
        //........ using vector
        // vector <int> temp;
        // while(!q.empty()){
        //     temp.push_back(q.front());
        //     q.pop();
        // }
        // for(int i=temp.size()-1;i>=0;i--){
        //     q.push(temp[i]);
        // }
        
        // ..........using stack
        stack <int> st;
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
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
   queue <int> res = rev(q);
   while(!res.empty()){
           cout<<res.front()<<" ";
            res.pop();
        }

    return 0;
}
