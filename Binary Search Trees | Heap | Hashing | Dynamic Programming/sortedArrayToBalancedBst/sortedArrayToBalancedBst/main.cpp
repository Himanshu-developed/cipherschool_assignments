#include<iostream>
using namespace std;
class treeNode
{
    public:
    int data;
    treeNode* left;
    treeNode* right;
};

treeNode* newNode(int data);
treeNode* conversion(int arr[],int start, int end)
{
    if (start > end)
    return NULL;
    int mid = (start + end)/2;
    treeNode *root = newNode(arr[mid]);
    root->left = conversion(arr, start,mid - 1);
    root->right = conversion(arr, mid + 1, end);
    return root;
}
treeNode* newNode(int data)
{
    treeNode* node = new treeNode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
void preOrder(treeNode* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    treeNode *root = conversion(arr, 0, n-1);
    cout << "PreOrder Traversal of constructed BST \n";
    preOrder(root);
    return 0;
    
}
