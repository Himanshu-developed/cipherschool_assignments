#include <iostream>
#include<stack>
using namespace std;
struct tree
{
    int data;
    tree* left;
    tree* right;
    tree(int val)
    {
        data = val;
        left = right = NULL;
    }
};
bool isBst(tree *root)
{
    stack<tree* > Stack;
    tree* prev = NULL;
    while (!Stack.empty() ||root != NULL)
    {
        while (root != NULL)
        {
            Stack.push(root);
            root = root->left;
        }
        root = Stack.top();
        Stack.pop();
        if(prev != NULL && root->data <= prev->data)
        {
            return false;
        }
        prev = root;
        root = root->right;
    }
    return true;
}
int main()
{
    
    tree *root = new tree(15);
    root->left = new tree(30);
    root->right = new tree(45);
    root->left->left = new tree(60);
    root->left->right = new tree(75);
    root->right->right = new tree(90);
    root->right->left = new tree(90);
    if (isBst(root))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

