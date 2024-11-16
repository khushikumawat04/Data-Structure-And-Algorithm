#include <iostream>
#include <queue>
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

//2nd method
  int countLeaves(Node* root) {
        // write code here
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        return countLeaves(root->left) + countLeaves(root->right);
    }
int main(){
		Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
//	root->right->right = new Node(7);


	cout<<endl<<"Leaves of Binary tree: "<<countLeaves(root);
	return 0;
}
