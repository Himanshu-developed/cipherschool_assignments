#include <iostream>
#include <stack>
using namespace std;
stack<int> sortStackElement(stack<int> &input)
{
    stack<int> tempStack;
    while (!input.empty())
    {
        int temp = input.top();
        input.pop();
        while (!tempStack.empty() && tempStack.top() > temp)
        {
            input.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }

    return tempStack;
}

int main()
{
    stack<int> item;
    item.push(93);
    item.push(34);
    item.push(0);
    item.push(45);
    item.push(00);
    item.push(3);
    stack<int> tempStack = sortStackElement(item);
    cout <<"Sorted numbers are:"<<endl;
    while (!tempStack.empty())
    {
        cout << tempStack.top()<<endl;
        tempStack.pop();
    }
}

