#include <iostream>
using namespace std;
using namespace std;
struct node
{
    int item;
    node* next;
};
int find(node* head);
int findIntersectionNode(int a, node* head1, node* head2);
int getIntersectionNode(node* head1, node* head2)
{
    int b = find(head1);
    int c = find(head2);
    int a;
    if (b > c)
    {
        a = b - c;
        return findIntersectionNode(a, head1, head2);
    }
    else
    {
        a = c - b;
        return findIntersectionNode(a, head2, head1);
    }
}
int findIntersectionNode(int a, node* head1, node* head2)
{
    node* current1 = head1;
    node* current2 = head2;
     for (int i = 0; i < a; i++)
    {
        if (current1 == NULL)
        {
            return -1;
        }
        current1 = current1->next;
    }
    while (current1 != NULL && current2 != NULL)
    {
        if (current1 == current2)
        {
            return current1->item;
        }
        current1 = current1->next;
        current2 = current2->next;
    }
 
    return -1;
}
int find(node* head)
{
    node* current = head;
     int count = 0;
     while (current != NULL)
     {
         count++;
         current = current->next;
     }
 
    return count;
}
 int main()
{
 
    node* data;
    node* head1 = new node();
    head1->item = 10;
 
    node* head2 = new node();
    head2->item = 3;
 
    data = new node();
    data->item = 6;
    head2->next = data;
 
    data = new node();
    data->item = 9;
    head2->next->next = data;
 
    data = new node();
    data->item = 15;
    head1->next = data;
    head2->next->next->next = data;
 
    data = new node();
    data->item = 30;
    head1->next->next = data;
 
    head1->next->next->next = NULL;
 
    cout << "The node of intersection is " << getIntersectionNode(head1, head2)<<endl;
    return  0;
}
