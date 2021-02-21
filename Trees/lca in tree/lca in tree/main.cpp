#include <iostream>
#include <vector>
using namespace std;
struct node
{
    int item;
    struct node *left, *right;
};
node *newnode(int k)
{
    node *temp = new node;
    temp->item = k;
    temp->left = temp->right = NULL;
    return temp;
}
bool isPathAvailable(node *root, vector<int> &path, int k)
{
    if (root == NULL)
    {
        return false;
    }
    path.push_back(root->item);
    if (root->item == k)
    {
        return true;
    }
    if ( (root->left && isPathAvailable(root->left, path, k)) ||(root->right && isPathAvailable(root->right, path, k)) )
    {
        return true;
    }
    path.pop_back();
    return false;
}
int getLca(node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if ( !isPathAvailable(root, path1, n1) || !isPathAvailable(root, path2, n2))
    {
        return -1;
    }
    int i;
    for (i = 0; i < path1.size() && i < path2.size() ; i++)
    {
        if (path1[i] != path2[i])
        {
            break;
        }
    }
    return path1[i-1];
    
}
int main()
{
    node * root = newnode(10);
    root->left = newnode(20);
    root->right = newnode(30);
    root->left->left = newnode(40);
    root->left->right = newnode(50);
    root->right->left = newnode(60);
    root->right->right = newnode(70);
    cout <<  getLca(root, 40, 50)<<endl;
    cout <<  getLca(root, 40, 60)<<endl;
    cout << getLca(root, 30, 40)<<endl;
    cout <<  getLca(root, 20, 40)<<endl;
    return 0;
}

