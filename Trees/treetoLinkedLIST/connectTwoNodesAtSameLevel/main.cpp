#include <iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
void treeToLl(node *root, node **head)
{
    if (root == NULL)
    {
        return;
    }
    static node* prev = NULL;
    treeToLl(root->left, head);
    if (prev == NULL)
    {
        *head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    treeToLl(root->right, head);
}
node *newNode(int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return (new_node);
}
void print(node *node)
{
    while (node!=NULL)
    {
        cout << node->data <<endl;
        node = node->right;
    }
}
int main()
{
    node *root = newNode(8);
    root->left = newNode(9);
    root->right = newNode(12);
    root->left->left = newNode(11);
    root->left->right = newNode(18);
    root->right->left = newNode(14);
    node *head = NULL;
    treeToLl(root, &head);
    print(head);
    return 0;
}

