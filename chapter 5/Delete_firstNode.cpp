#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void linklistTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

Node *DeleteFirstNode(Node *head)
{
    Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
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

    cout << "Original Linked List:" << endl;
    linklistTraversal(head);
    cout << "\nLinked List after Deletion of First Node:" << endl;
    head = DeleteFirstNode(head);
    linklistTraversal(head);

    return 0;
}
