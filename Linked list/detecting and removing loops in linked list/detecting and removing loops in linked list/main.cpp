#include <iostream>
using namespace std;
struct node
{
    int item;
    struct node *next;
};
void removeLoop(struct node*, struct node*);
int detectAndRemoveLoop(struct node* list)
{
    struct node *slow = list, *fast = list;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            removeLoop(slow, list);
            return 1;
        }
    }
    return 0;
}

void removeLoop(struct node* loop, struct node* head)
{
    struct node* ptr1;
    struct node* ptr2;
    ptr1 = head;
    while (1)
    {
        ptr2 = loop;
        while (ptr2->next != loop && ptr2->next != ptr1)
        {
            ptr2 = ptr2->next;
        }
            if (ptr2->next == ptr1)
            {
            break;
            }
        ptr1 = ptr1->next;
    }
    ptr2->next = NULL;
}
void print(struct node* ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->item <<endl;
        ptr = ptr->next;
    }
}

struct node* newNode(int num)
{
    struct node* temp = new node();
    temp->item = num;
    temp->next = NULL;
    return temp;
}
int main()
{
    struct node* head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    head->next->next->next->next->next = head->next->next;
    detectAndRemoveLoop(head);
    cout << "Linked List after removing loop" << endl;
    print(head);
    return 0;
}

