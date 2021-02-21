#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left, *right;
};
int isMirror(Node* a, Node* b)
{
    if (a==NULL && b==NULL)
    {
        return true;
    }
    if (a==NULL || b == NULL)
    {
        return false;
    }
    return a->data == b->data && isMirror(a->left, b->right) && isMirror(a->right, b->left);
}
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return(node);
}
int main()
{
    Node *a = newNode(10);
    Node *b = newNode(10);
    a->left = newNode(12);
    a->right = newNode(18);
    a->left->left = newNode(49);
    a->left->right = newNode(15);
    b->left = newNode(12);
    b->right = newNode(21);
    b->right->left = newNode(14);
    b->right->right = newNode(18);
    isMirror(a, b)? cout << "Yes"<<endl : cout <<"No"<<endl;
    return 0;
}

