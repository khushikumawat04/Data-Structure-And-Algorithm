#include <iostream>
#include <stack>
using namespace std;
  int minAddToMakeValid(string s) {
   int left = 0;
        int count = 0;
        for(int i=0; i<s.size();i++){
            if(s[i]== '('){
                left++;
            }
            else{
                if(left==0){
                    count++;
                }
                else{
                    left--;
                }
            }
        }
       
        return count+left;
        
    }

int main()
{
    string s = "(())))";
    cout<<minAddToMakeValid(s);
   

    return 0;
}
