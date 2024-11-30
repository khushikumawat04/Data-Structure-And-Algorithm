
#include <iostream>
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


// transevers
void inorder(node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
int arr[] = {1,5,9,3,2,4};
int n  =sizeof(arr)/sizeof(arr[0]);
node* root = NULL;
for(int i=0;i<n;i++){
    root = insert(root, arr[i]);
}

// transverse
inorder(root);

    return 0;
}


// time complexity - O(logn) worst case - o(n) or o(h)
// space complexity - O(h)
