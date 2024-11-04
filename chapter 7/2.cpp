//user input preorder


#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }
    char choice;
    cout << "Insert " << value << " to the left or right of " << root->data << "? (l/r): ";
    cin >> choice;
    if (choice == 'l') {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

void preorder(Node *root) {
    if (!root) return;
    stack<Node*> st;
    st.push(root);
    while (!st.empty()) {
        Node *node = st.top();
        cout << node->data << " ";
        st.pop();
        if (node->right) st.push(node->right);
        if (node->left) st.push(node->left);
    }
}

int main() {
    Node *root = NULL;
    int n, value;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        if (root == NULL) {
            root = new Node(value);
        } else {
            insertNode(root, value);
        }
    }
    cout << "Preorder Traversal: ";
    preorder(root);
    return 0;
}
