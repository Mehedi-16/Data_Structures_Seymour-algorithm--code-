#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// লিংকড লিস্ট ট্রাভার্স করে প্রতিটি নোডের data প্রিন্ট করা
void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

// নির্দিষ্ট ইন্ডেক্সে নতুন নোড ইনসার্ট করার ফাংশন
Node *insertAtIndex(Node *head, int data, int index)
{
    Node *ptr = new Node;
    ptr->data = data;

    // যদি ইন্ডেক্স ০ হয়, নতুন নোডকে head হিসেবে সেট করা
    if (index == 0)
    {
        ptr->next = head;
        head = ptr;
        return head;
    }

    // নির্দিষ্ট ইন্ডেক্সে যাওয়ার জন্য ট্রাভার্স করা
     Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    // নতুন নোডটি ইনসার্ট করা
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

int main()
{
    struct Node *head = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    struct Node *fourth = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    cout << "Original Linked List:" << endl;
    Traversal(head);

    // head আপডেট করা হচ্ছে নতুন নোড যুক্ত করার পরে
    head = insertAtIndex(head, 56, 2);

    cout << "\nLinked List after Insertion at Index 1:" << endl;
    Traversal(head);

    return 0;
}
