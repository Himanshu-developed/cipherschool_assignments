#include <iostream>
using namespace std;
struct node
{
    int item;
    node *left, *right;
 
    node(int item)
    {
        this->item = item;
        this->left = this->right = nullptr;
    }
};
int maxSumPath(node *root, int &sum)
{
    if (root == nullptr)
    {
        return 0;
    }
    int left = maxSumPath(root->left, sum);
    int right = maxSumPath(root->right, sum);
    int sum1 = left + right + root->item;
    sum = max(sum1, sum);
    if (root->left == nullptr)
    {
        return right + root->item;
    }
    if (root->right == nullptr)
    {
        return left + root->item;
    }
    return max(left, right) + root->item;
}
int maxSumPath(node* root)
{
    int sum = 0;
    maxSumPath(root, sum);
    return sum;
}
int main()
{
    node* root = nullptr;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(-4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
    cout << maxSumPath(root) << endl;
    return 0;
}
