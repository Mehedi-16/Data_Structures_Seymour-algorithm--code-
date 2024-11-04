#include <iostream>
#include <stack>
using namespace std;

struct node
{
    char data; // Character data
    struct node *left;
    struct node *right;
};

struct node *newnode(char value)
{
    struct node *temp = new struct node;
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(node *root)
{
    stack<node *> st;
    
    while (root != NULL || !st.empty())
    {
        // Traverse to the leftmost node
        while (root != NULL)
        {
            st.push(root); // Push the current node to stack
            root = root->left; // Move to the left child
        }

        // Current must be NULL at this point
        root = st.top(); // Get the top node
        st.pop();
        cout << root->data << " "; // Print the node's data
        root = root->right; // Move to the right subtree
    }
}

int main()
{
    struct node *root = newnode('A');  
    root->left = newnode('B');
    root->right = newnode('C');
    root->left->left = newnode('D');
    root->left->left->left = newnode('G');
    root->left->left->right = newnode('H');
    root->left->left->right->right = newnode('K');
    root->right->left = newnode('E');
    root->right->right = newnode('F');
    
    inorder(root); // Call the inorder function
    return 0;
}
