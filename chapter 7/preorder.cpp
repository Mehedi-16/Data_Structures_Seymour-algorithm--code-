//mahir code 
#include <iostream>
#include <stack>
using namespace std;

struct node
{
    char data; // Change int to char for character data
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

void preorder(node *root)
{
    if (!root)
        return; // Handle empty tree case

    stack<node *> st; 
    st.push(root);

    while (!st.empty())
    {
         node *s = st.top();
        cout << s->data << " ";
        st.pop();

        if (s->right)
            st.push(s->right);
        if (s->left)
            st.push(s->left);
    }
}

int main()
{
     node *root; //= newnode('A');
    root = newnode('A');  // Change int to char for character data
    root->left = newnode('B');
    root->right = newnode('C');
    root->left->left = newnode('D');
    root->left->left->left = newnode('G');
    root->left->left->right = newnode('H');
    root->left->left->right->right = newnode('K');
    root->right->left = newnode('E');
    root->right->right = newnode('F');
    
    preorder(root);
    return 0;
}
// Answer: A, B, D, G, H, K, C, E, F.