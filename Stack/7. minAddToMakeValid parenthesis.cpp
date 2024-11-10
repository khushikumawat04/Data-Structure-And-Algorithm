#include <iostream>
#include <stack>
using namespace std;
        stack <char> st;
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    count++;
                }
                else{
                    st.pop();
                }
            }
        }
        return count+st.size();
        
    }

int main()
{
    string s = "(())))";
    cout<<minAddToMakeValid(s);
   

    return 0;
}
