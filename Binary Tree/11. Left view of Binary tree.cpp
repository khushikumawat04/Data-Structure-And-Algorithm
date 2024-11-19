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

   vector<int> leftView(Node *root) {
        // code here
          vector <int> ans;
          if(!root){
              return ans;
          }
         queue <Node*> q;
      
         q.push(root);
         while(!q.empty()){
               ans.push_back(q.front()->data);
              int n = q.size();
              while(n--){
                  Node* temp = q.front();
                  q.pop();
                  if(temp->left) q.push(temp->left);
                  if(temp->right) q.push(temp->right);
           }
        
         }
        
        return ans;
    }


int main(){
		Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	vector <int> ans = leftView(root);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}

	return 0;
}
