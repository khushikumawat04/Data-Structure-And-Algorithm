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
// 1st method
int getsize(Node *root){
	if(!root){
		return 0;
	}
	return (1+getsize(root->left)+getsize(root->right));
}
//2nd method
void totalSize(Node* root, int &count){
  
      if(root==NULL){
          return;
      }
      count++;
      totalSize(root->left,count);
        totalSize(root->right,count);
      
  }
int main(){
		Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
//	root->right->right = new Node(7);
	cout<<getsize(root);
	int count = 0;
	totalSize(root,count);
	cout<<endl<<"Size of Binary tree: "<<count;
	return 0;
}
