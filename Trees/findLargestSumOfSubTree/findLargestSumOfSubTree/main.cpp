#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
int findSum(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    int sum = root->data + findSum(root->left, ans) + findSum(root->right, ans);
    ans = max(ans, sum);
    return sum;
}
int getSum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = 0;
    findSum(root, ans);
    return ans;
}
int main()
{
    Node *root = newNode(12);
    root->left = newNode(18);
    root->right = newNode(20);
    root->left->left = newNode(21);
    root->left->right = newNode(5);
    cout << getSum(root);
    return 0;
}

