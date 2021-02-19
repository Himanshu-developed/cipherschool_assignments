#include<iostream>
using namespace std;
struct node
{
    int item;
    struct node *next;
    node(int item)
    {
        this->item=item;
        next=NULL;
    }
    
};
struct linkedList
{
    node *head;
    linkedList()
    {
        head=NULL;
    }
    void reverse()
    {
        node *currentPos=head, *prev=NULL, *next=NULL;
        while (currentPos!=NULL)
        {
            next=currentPos->next;
            currentPos->next=prev;
            prev=currentPos;
            currentPos=next;
        }
        head=prev;
    }
    void print()
    {
        struct node *data=head;
        while (data!=NULL)
        {
            cout<<data->item<<endl;
            data=data->next;
        }
    }
    void insert(int item)
    {
        node *ptr=new node(item);
        ptr->next=head;
        head=ptr;
        
    }
};
int main()
{
    linkedList node;
    node.insert(23);
    node.insert(28);
    node.insert(30);
    node.insert(50);
    node.insert(68);
    cout<<"generated linked list is"<<endl;
    node.print();
    node.reverse();
    cout<<"the reversed link is ::"<<endl;
    node.print();
    return 0;
}
