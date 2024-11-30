#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left=right=NULL;
    }
};

node* insert(node* root,int target){
    if(!root){
        node* temp = new node(target);
        return temp;
    }
    if(target>=root->data){
        root->right = insert(root->right, target);
    }
    else{
        root->left = insert(root->left, target);
    }
    return root;
}



// to find minimum difference between two node
 void mindiff(node* root,int &ans, int &prev){
    if(!root){
        return;
    }
    mindiff(root->left,ans,prev);
if(prev!=INT_MIN){
 ans  = min(ans,root->data-prev);
}
     prev = root->data;
    mindiff(root->right,ans,prev);
   
 }
 
//  using inorder
 void inorder(node* root, vector <int> &ans){
        if(!root){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }

int main()
{
int arr[] = {1,5,9,3,2,4};
int n  =sizeof(arr)/sizeof(arr[0]);
node* root = NULL;
for(int i=0;i<n;i++){
    root = insert(root, arr[i]);
}

// 1st method
int ans = INT_MAX;
int prev = INT_MIN;
mindiff(root,ans,prev);
cout<<"The minimum difference between two node is: "<<ans<<endl;

// 2nd method
vector <int> temp;
int minans = INT_MAX;
inorder(root,temp);
for(int i=1;i<temp.size();i++){
            int curr = temp[i] - temp[i-1];
            minans = min(minans,curr);  
        }
      cout<<"The minimum difference between two node is: "<<minans<<endl;

    return 0;
}
