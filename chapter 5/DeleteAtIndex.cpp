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

Node *DeleteAtIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;
    if (index == 0)
    {
        Node *ptr = head;
        head = head->next;
        delete ptr;
        return head;
    }
    int i=0;
    while(i!=index-1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    delete q;
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

    // Deleting node at index 0
    head = DeleteAtIndex(head, 0);
    cout << "\nLinked List after Deletion at index 0:" << endl;
    linklistTraversal(head);

    return 0;
}
