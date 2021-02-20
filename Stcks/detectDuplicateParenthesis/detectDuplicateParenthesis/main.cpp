#include <iostream>
#include<stack>
using namespace std;
bool checkParenthesis(string str)
{
    stack<char> stacks;
    for (char ch : str)
    {
        if (ch==')')
        {
            char top = stacks.top();
            stacks.pop();
            int i = 0;
            while (top != '(')
            {
                i++;
                top = stacks.top();
                stacks.pop();
            }
            if(i < 1)
            {
                return 1;
            }
        }
        else
        {
            stacks.push(ch);
        }
    }
    return false;
}
int main()
{
    string str = "[d*{c+(a+b)}]";
    if (checkParenthesis(str))
    {
        cout << "Duplicate Parenthesis Found"<<endl;
    }
    else
    {
        cout << "No Duplicates Parenthesis Found"<<endl;
    }
    return 0;
}

