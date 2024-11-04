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

node *insertItem()
{
    int value;
    cout<<"enter node value (-1 for no node): ";
    cin>>value;

    if (value==-1)
    {
       return NULL;
    }
    
    node *newNode=new node(value);
  {
    cout<<"Enter left  value of"<<value<<endl;
    newNode->left=insertItem();
    cout<<"Enter right  value of"<<value<<endl;
    newNode->right=insertItem();
    return newNode;

  }


}

int main()
{
    node *root = insertItem();
    cout << "Preorder :";
    preorder(root);
}
