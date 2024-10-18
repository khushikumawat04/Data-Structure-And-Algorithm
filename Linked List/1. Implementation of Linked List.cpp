

#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};

int main()
{
   Node* n1 =  new Node(1);  //dynamic memory allocation of class	
     Node* n2 =  new Node(2); 
   cout<<n1->val<<" "<<n1->next<<"->";
     cout<<n2->val<<" "<<n2->next;

    return 0;
}
