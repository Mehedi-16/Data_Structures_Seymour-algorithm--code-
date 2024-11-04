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
        left = NULL;
        right = NULL;
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

node* insertNode()
{
    int value;
    cout << "Enter node value (-1 for no node): ";
    cin >> value;
    
    if (value == -1)
    {
        return NULL;
    }
    
    node* newNode = new node(value);
    cout << "Enter left child of " << value << endl;
    newNode->left = insertNode();
    cout << "Enter right child of " << value << endl;
    newNode->right = insertNode();
    
    return newNode;
}

int main()
{
    cout << "Create the binary tree:\n";
    node *root = insertNode();

    cout << "Preorder traversal: ";
    preorder(root);
}
