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
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node* insertAtFirst(Node *head, int data)
{
    Node *ptr = new Node; // নতুন নোড তৈরি
    ptr->data = data;     // নতুন নোডের data সেট করা
    ptr->next = head;     // নতুন নোডের next কে বর্তমান head হিসেবে সেট করা
    head = ptr;           // head আপডেট করা
    return head;          // নতুন head রিটার্ন করা
}

int main()
{
    Node *head = new Node;   // প্রথম নোড তৈরি
    Node *second = new Node; // দ্বিতীয় নোড তৈরি
    Node *third = new Node;  // তৃতীয় নোড তৈরি
    Node *fourth = new Node; // চতুর্থ নোড তৈরি

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

    // নতুন নোড ৫৬ যুক্ত করা হচ্ছে এবং head আপডেট করা হচ্ছে
    head = insertAtFirst(head, 56);

    cout << "\nLinked List after Insertion at First:" << endl;
    Traversal(head);

    return 0;
}
