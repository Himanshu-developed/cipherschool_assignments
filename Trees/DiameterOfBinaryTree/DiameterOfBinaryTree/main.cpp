#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
struct node* newNode(int data);
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int height(struct node* node);
int diameter(struct node* tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    int lheight = height(tree->left);
    int rheight = height(tree->right);
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);
    return max(lheight + rheight + 1,max(ldiameter, rdiameter));
}
int height(struct node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    return 1 + max(height(node->left), height(node->right));
}
struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main()
{
    struct node* root = newNode(12);
    root->left = newNode(20);
    root->right = newNode(32);
    root->left->left = newNode(14);
    cout << "Diameter of tree:: " <<diameter(root)<<endl;
    return 0;
}

