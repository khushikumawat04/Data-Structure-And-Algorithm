
#include <iostream>
#include <stack>
using namespace std;
 bool isParenthesisBalanced(string& s) {
        // code here
        stack <char> st;
        for(int i=0; i<s.size();i++){
           
           if(s[i] == '{' || s[i]=='[' || s[i] == '('){
                st.push(s[i]);
            }
            else{
                 if (st.empty()) {
                return false;
            }
               if(s[i] =='}' && st.top() == '{' || s[i] ==']' && st.top() == '[' ||
               s[i] ==')' && st.top() == '('){
                   st.pop();
               }
               else{
                   return false;
               }
            }
            
        }
        return st.empty();
    }

int main()
{
    string s = "{[()]}";
    cout<<isParenthesisBalanced(s);
    return 0;
}
