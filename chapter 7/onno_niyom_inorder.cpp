#include <iostream>
#include <stack>
using namespace std;

struct node
{
    char data; // Character data
    node *left;
    node *right;
    node(char val) : data(val), left(NULL), right(NULL) {} // Constructor to initialize node
};

void inorder(node *root)
{
    stack<node *> st;

    while (root != NULL || !st.empty())
    {
        // Traverse to the leftmost node
        while (root != NULL)
        {
            st.push(root);     // Push the current node to stack
            root = root->left; // Move to the left child
        }

        // Current must be NULL at this point
        root = st.top(); // Get the top node
        st.pop();
        cout << root->data << " "; // Print the node's data
        root = root->right;        // Move to the right subtree
    }
}

int main()
{
    // Create nodes using 'new'
    node *root = new node('A');
    root->left = new node('B');
    root->right = new node('C');
    root->left->left = new node('D');
    root->left->left->left = new node('G');
    root->left->left->right = new node('H');
    root->left->left->right->right = new node('K');
    root->right->left = new node('E');
    root->right->right = new node('F');

    inorder(root); // Call the inorder function
    return 0;
}
