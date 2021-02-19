#include <iostream>
using namespace std;
struct node
{
    int item;
    node* next;
};
void insert(node **head, int data)
{
    node *ptr = new node();
    ptr->item = data;
    ptr->next = (*head);
    (*head) = ptr;
}
void deleteNode(node **head, int key)
{
    node *temp = *head;
    node *prev = NULL;
    if (temp != NULL && temp->item == key)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    else
    {
    while (temp != NULL && temp->item != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return;
    }
    prev->next = temp->next;
    delete temp;
    }
}
void print(node *list)
{
    while (list != NULL)
    {
        cout << list->item <<endl;
        list = list->next;
    }
}

int main()
{
    
    node *head = NULL;
    insert(&head, 35);
    insert(&head, 34);
    insert(&head, 23);
    insert(&head, 19);
    print(head);
    deleteNode(&head, 19);
    cout<<"Link list after Deletion::"<<endl;
    print(head);
    return 0;
}


