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
void sumofnode(Node* root,int &sum){
    if(root==NULL){
        return;
    }
    sum+=root->data;
    sumofnode(root->left,sum);
    sumofnode(root->right,sum);
    
}
//2nd method
 int sumBT(Node* root)
{
    
    // ...2nd method
    if(root==NULL){
        return 0;
    }
        
        return root->data+sumBT(root->left)+sumBT(root->right);
   
}
int main(){
		Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
//	root->right->right = new Node(7);
	cout<<sumBT(root);
	int sum = 0;
	sumofnode(root,sum);
	cout<<endl<<"Sum of Binary tree: "<<sum;
	return 0;
}
