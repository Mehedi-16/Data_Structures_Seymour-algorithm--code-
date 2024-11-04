#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linklistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
//case 1:delete first node
struct Node *DeleteFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//case 3: delteALastNode
struct Node *DeleteLastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL) 
    {
        p=p->next;
        q = q->next;

    }
    p->next = NULL; // null e move kore fellam p ke
    free(q);
    return head;
    
    
}


int main()
{
    struct Node *head = new Node;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

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
    cout << "\nLinked List after Deletion :" << endl;
   head = DeleteLastNode(head);
    linklistTraversal(head);

    return 0;
}
