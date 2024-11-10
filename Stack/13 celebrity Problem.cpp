#include <iostream>
#include <vector>
#include <stack>
using namespace std;

 // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        stack <int> st;
       int n = mat[0].size();
       for(int i=n-1;i>=0;i--){
           st.push(i);
       }
       while(st.size()>1){
           int first = st.top();
           st.pop();
           int sec = st.top();
           st.pop();
           if(mat[first][sec] && !mat[sec][first]){
               st.push(sec);
           }
           else if(!mat[first][sec] && mat[sec][first]){
               st.push(first);
           }
       }
       if(st.empty()){
           return -1;
       }
       int num = st.top();
       int rows=0;
       int cols = 0;
       for(int i=0;i<n;i++){
           rows+=mat[num][i];
           cols+=mat[i][num];
       }
       return rows==0 && cols==n-1 ? num : -1;
        
    }

int main() {
  vector <vector <int> > mat = {{0,1,0},{0,0,0},{0,1,0}};
  cout<<celebrity(mat);
    return 0;
}

