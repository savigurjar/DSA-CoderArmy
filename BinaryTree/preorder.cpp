#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void preorder(Node *root)
{
    if (root == NULL)
        return;
    // node
    cout << root->data << " ";
    // left
    preorder(root->left);
    // right
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
        return;

    // left
    inorder(root->left);
    // node
    cout << root->data << " ";
    // right
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;

    // left
    postorder(root->left);
    // right
    postorder(root->right);
    // node
    cout << root->data << " ";
}

Node *binaryTree()
{
    int x;
    cin >> x;

    if (x == -1)
        return NULL;

    Node *temp = new Node(x);
    // left side create
    cout << "Enter the left child of " << x << " : ";
    temp->left = binaryTree();
    // right side create
    cout << "Enter the right child of " << x << " : ";

    temp->right = binaryTree();

    return temp;
}
int main()
{
    // tree creation node

    cout << "Enter the root Node: "<<endl;
    Node *root;
    root = binaryTree();

    // preoder print:
    cout << "Pre Order: " << endl;
    preorder(root);

    // inorder
    cout << "in order: " << endl;
    inorder(root);

    // postorder
    cout << "post order: " << endl;
    postorder(root);
}