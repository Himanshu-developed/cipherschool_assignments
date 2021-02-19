#include <iostream>
using namespace std;
struct node
{
    int item;
    node* next;
};
node* newNode(int item)
{
    node* createNode = new node();
    createNode->item = item;
    createNode->next = NULL;
    return createNode;
}
void insert(node **head, int item)
{
    node *generateNode = newNode(item);
    generateNode->next = (*head);
    *head = generateNode;
}
node* addTwoNum(node* first, node* second)
{
    node* res = NULL;
    node *temp, *prev = NULL;
    int carry = 0, sum;
    while (first != NULL|| second != NULL)
    {
        sum = carry + (first ? first->item : 0)+ (second ? second->item : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);

        if (res == NULL)
        {
            res = temp;
        }
        else
        {
            prev->next = temp;
        }

        prev = temp;
        if (first)
        {
            first = first->next;
        }
        if (second)
        {
            second = second->next;
        }
    }

    if (carry > 0)
    {
        temp->next = newNode(carry);
    }
    return res;
}
void print(node* nodeData)
{
    while (nodeData != NULL)
    {
        cout << nodeData->item<<endl;
        nodeData = nodeData->next;
    }
    cout << endl;
}
int main()
{
    node* res = NULL;
    node* first = NULL;
    node* second = NULL;
    insert(&first, 6);
    insert(&first, 4);
    insert(&first, 9);
    insert(&first, 5);
    insert(&first, 7);
    insert(&second, 4);
    insert(&second, 8);
    res = addTwoNum(first, second);
    cout << "SUM="<<endl;
    print(res);
    return 0;
}


