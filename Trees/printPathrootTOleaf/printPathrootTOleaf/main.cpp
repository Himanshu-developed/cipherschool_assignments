#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
};
void getPath1(node* node, int path[], int pathLen);
void print(int arr[], int n);
void getPath(node* node)
{
    int path[50];
    getPath1(node, path, 0);
}
void getPath1(node* node, int path[], int pathLen)
{
    if (node == NULL)
        return;
    path[pathLen] = node->data;
    pathLen++;
    if (node->left == NULL && node->right == NULL)
    {
        print(path, pathLen);
    }
    else
    {
        getPath1(node->left, path, pathLen);
        getPath1(node->right, path, pathLen);
    }
}
void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
node* newnode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}
int main()
{
    node *root = newnode(10);
    root->left = newnode(8);
    root->right = newnode(2);
    root->left->left = newnode(3);
    root->left->right = newnode(5);
    root->right->left = newnode(2);
    getPath(root);
    return 0;
}


