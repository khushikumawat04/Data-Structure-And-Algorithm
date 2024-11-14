#include <iostream>
#include <queue>
using namespace std;

class  Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data = x;
        left=right=NULL;
    }
};

int main()
{
    queue <Node*> q;
    int l;
    int r;
    int x;
    cout<<"Enter the root Element"<<endl;
    cin>>x;
   Node* root = new Node(x);
   q.push(root);
   while(!q.empty()){
       Node *temp = q.front();
       q.pop();
       cout<<"Enter the left child of "<<temp->data;
       cin>>l;
       if(l!=-1){
            temp->left = new Node(l);
           q.push(temp->left);
       }
       cout<<"Enter the right child of "<<temp->data;
       cin>>r;
       if(r!=-1){
            temp->right = new Node(r);
           q.push(temp->right);
       }
   }
    return 0;
}
