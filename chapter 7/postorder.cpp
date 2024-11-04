#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void postorderTraversal(Node* root) {
    if (root == NULL) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* s = st.top();
        st.pop();
        
        cout << s->data << " "; // প্রাথমিকভাবে প্রিন্ট করুন

        // বাম এবং ডান সন্তানগুলোকে স্ট্যাকে পুশ করুন
        if (s->left) st.push(s->left);
        if (s->right) st.push(s->right);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    
    return 0;
}
