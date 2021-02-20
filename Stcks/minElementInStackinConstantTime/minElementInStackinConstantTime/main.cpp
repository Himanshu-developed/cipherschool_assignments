#include <iostream>
#include <stack>
using namespace std;
struct stacks
{
    stack<int> s;
    int min;
    void getMin()
    {
        if (s.empty())
        {
            cout << "no element in stack"<<endl;
        }
        else
        {
            cout <<"Minimum Element in the stack is: "<< min <<endl;
        }
    }
    void peek()
    {
        if (s.empty())
        {
            cout << "no element in stack ";
            return;
        }

        int top = s.top();
        cout << "Top Most Element is: ";
        (top < min)? cout<<min:cout<<top;
    }
    void pop()
    {
        if (s.empty())
        {
            cout << "no element in stack";
            return;
        }

        cout << "Top Most Element Removed: ";
        int top = s.top();
        s.pop();
        if (top < min)
        {
            cout << min << endl;
            min = 2*min - top;
        }

        else
        {
            cout<<top<<endl;
        }
    }
    void push(int item)
    {
        if (s.empty())
        {
            min = item;
            s.push(item);
            return;
        }
        if (item < min)
        {
            s.push(2*item - min);
            min = item;
        }

        else
        {
        s.push(item);
        }
    }
};
int main()
{
    stacks s;
    s.push(13);
    s.push(50);
    s.push(12);
    s.push(18);
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    s.peek();
    return 0;
}

