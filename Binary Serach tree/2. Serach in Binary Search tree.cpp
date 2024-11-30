
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


// serach function
bool search(node* root, int x) {
    // Your code here
    if(!root){
        return 0;
    }
    if(root->data==x){
        return 1;
    }
    else if(x<root->data){
        search(root->left,x);
    }
    else{
        search(root->right,x);
    }
    
   
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
cout<<endl;
// serach
if(search(root,9)){
    cout<<"node Present"<<endl;
}
else{
    cout<<"Node is not present"<<endl;
}

    return 0;
}


// search time complexity - O(logn) worst case - o(n) or o(h)
// space complexity - O(h)
