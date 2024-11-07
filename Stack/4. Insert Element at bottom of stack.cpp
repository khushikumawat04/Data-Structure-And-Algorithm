#include <iostream>
#include <stack>
using namespace std;
stack <int> InsertAtBottom(stack <int> st, int x){
        stack <int> temp;
        while(!st.empty()){
          temp.push(st.top());
            st.pop();
        }
        st.push(x);
         while(!temp.empty()){
          st.push(temp.top());
            temp.pop();
        }
        return st;
}
int main()


{
stack <int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
// Elemnt to insert at bottom
int x= 10;
stack <int> res;
res = InsertAtBottom(st,x);
while(!res.empty()){
    cout<<res.top()<<endl;
    res.pop();
}


    return 0;
}

// time complexity - O(N)
// space complexity - O(N)
