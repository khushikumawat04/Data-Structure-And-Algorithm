

#include <iostream>
#include <stack>
using namespace std;


int main()

{
stack <char> st;
string str  = "hello";
for(int i=0;i<str.size();i++){
    st.push(str[i]);
}
int i=0;
while(!st.empty()){
    str[i] = st.top();
    i++;
    st.pop();
}
for(char i=0;i<str.size();i++){
   cout<<str[i];
}

    return 0;
}
