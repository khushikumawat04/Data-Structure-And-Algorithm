#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Node{
    public:
	int data;
	struct Node* left;
	struct Node* right;
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

void Levelorder( Node* &root){
    queue <Node*> q;
    vector <int> res;
	if(root == NULL){
		return;
	}
      q.push(root);
      while(!q.empty()){
         Node* temp = q.front();
         q.pop();
         cout<<temp->data<<" ";
         res.push_back(temp->data);
         if(temp->left){
             q.push(temp->left);
            
         }
         if(temp->right){
             q.push(temp->right);
             
         }
      }
    
}




int main(){
	 Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	Levelorder(root);
;
	return 0;
}
