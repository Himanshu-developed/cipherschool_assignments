#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
void rePosition(node **des, node **src);
node* merge(node *a, node *b)
{
    node temp;
    node *tail = &temp;
    temp.next = NULL;
    while (1)
    {
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        if (a->item <= b->item)
            rePosition(&(tail->next), &a);
        else
            rePosition(&(tail->next), &b);

        tail = tail->next;
    }
    return(temp.next);
}
void rePosition(node **des, node **src)
{
    node* newNode = *src;
    assert(newNode != NULL);
    *src = newNode->next;
    newNode->next = *des;
    *des = newNode;
}
void insert(node **head, int newitem)
{
    node *newNode = new node();
    newNode->item = newitem;
    newNode->next = (*head);
    (*head) = newNode;
}
void print(node *ptr)
{
    while (ptr!=NULL)
    {
        cout<<ptr->item<<endl;
        ptr = ptr->next;
    }
}
int main()
{
    node* a = NULL;
    node* b = NULL;
    insert(&a, 12);
    insert(&a, 15);
    insert(&a, 22);
    insert(&b, 11);
    insert(&b, 13);
    insert(&b, 18);
    cout << "Merged Linked List is:"<<endl;
    print(merge(a,b));
    return 0;
}
