#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Traversal(Node *ptr)
{
    while (ptr != NULL)
    { 
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    Traversal(head);
}
