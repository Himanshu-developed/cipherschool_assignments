#include <iostream>
using namespace std;
struct node
{
    int data;
    node* left, *right;
};
struct node *lca(struct node* root, int n1, int n2)
{
    while (root != NULL)
    {
        if (root->data > n1 && root->data > n2)
        {
        root = root->left;
        }
        else if (root->data < n1 && root->data < n2)
        {
        root = root->right;
        }

        else break;
    }
    return root;
}
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = Node->right = NULL;
    return(Node);
}
int main()
{
    node *root = newNode(20);
    root->left = newNode(11);
    root->right = newNode(21);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(12);
    root->left->right->right = newNode(18);
    int n1 = 12, n2 = 18;
    node *ptr = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << ptr->data<<endl;
    n1 = 18;
    n2 = 11;
    ptr = lca(root, n1, n2);
    cout<<"LCA of " << n1 << " and " << n2 << " is " << ptr->data << endl;
    n1 = 12;
    n2 = 21;
    ptr = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << ptr->data << endl;
    return 0;
}

