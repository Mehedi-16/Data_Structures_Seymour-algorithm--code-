#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        right = NULL;
        left = NULL;
    }
};

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder_traversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}
void postorder_traversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = new node(1);
    root->left = new node(12);
    root->right = new node(9);
    root->left->left = new node(5);
    root->left->right = new node(6);

    preorder(root);
    cout << endl;
    // inorder_traversal(root);
    // cout<<endl;
    // postorder_traversal(root);

    return 0;
}