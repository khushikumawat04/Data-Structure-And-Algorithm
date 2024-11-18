#include <iostream>
#include <queue>
#include <math.h>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int val){
			data = val;
			left = NULL;
			right = NULL;
		}
};

int height(Node* root, bool &valid){
        if(!root){
            return 0;
        }
        int l = height(root->left,valid);
        int r = height(root->right,valid);
        if(abs(l-r)>1){
            valid = 0;
        }
        return  1+max(l,r);
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        bool valid = 1;
        height(root,valid);
        return valid;
    }
    
int main(){
		Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
//	root->right->right = new Node(7);


	cout<<isBalanced(root);
	return 0;
}
