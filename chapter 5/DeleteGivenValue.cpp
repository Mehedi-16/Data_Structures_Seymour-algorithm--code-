#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

// লিঙ্কড লিস্ট ট্রাভার্সাল ফাংশন
void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

// প্রথম নোড ডিলিট করার ফাংশন
struct Node* deleteFirstNode(struct Node* head) {
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// নির্দিষ্ট মানের নোড ডিলিট করার ফাংশন
struct Node* deleteGivenValue(struct Node* head, int value) {
    // যদি প্রথম নোডের ডেটা মান নির্দিষ্ট মানের সমান হয়
    if (head->data == value) {
        return deleteFirstNode(head);
    }

    struct Node* p = head;
    struct Node* q = head->next;

    while (q!= NULL && q->data != value) {
        p = p->next;
        q = q->next;
    }

    // ভ্যালুটি পাওয়া গেলে তা ডিলিট করা
    if (q != NULL) {
        p->next = q->next;
        free(q);
       
    }

   return head;
}

int main() {
    struct Node* head = new Node;
    struct Node* second = new Node;
    struct Node* third = new Node;
    struct Node* fourth = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    cout << "Original Linked List:" << endl;
    linkedListTraversal(head);

    // 1 মানের নোড ডিলিট করা
    cout << "\nLinked List after Deletion:" << endl;
    head = deleteGivenValue(head, 4);
    linkedListTraversal(head);

    return 0;
}
