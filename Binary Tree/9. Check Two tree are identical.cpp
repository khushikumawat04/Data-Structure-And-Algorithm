#include <iostream>
using namespace std;

// Definition for a binary tree node
class Node {
	public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to check if two trees are identical
bool isIdentical(Node *r1, Node *r2) {
    if (r1 == NULL && r2 == NULL) {
        return true;
    }
    if ((r1 && !r2) || (!r1 && r2)) {
        return false;
    }
    if (r1->data != r2->data) {
        return false;
    }

    return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
}

int main() {
    // Create first tree
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    // Create second tree
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    // Check if trees are identical
    if (isIdentical(root1, root2)) {
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }

    return 0;
}

