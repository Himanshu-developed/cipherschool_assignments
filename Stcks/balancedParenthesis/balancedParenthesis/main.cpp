#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string parenthesis)
{
    stack<char> s;
    char brackets;
    for (int i = 0; i < parenthesis.length(); i++)
    {
        if (parenthesis[i] == '(' || parenthesis[i] == '['|| parenthesis[i] == '{')
        {
            s.push(parenthesis[i]);
            continue;
        }
        if (s.empty())
        {
            return false;
        }

        switch (parenthesis[i])
        {
        case ')':
            brackets = s.top();
            s.pop();
            if (brackets == '{' || brackets == '[')
            {
                return false;
            }
            break;

        case '}':
            brackets = s.top();
            s.pop();
            if (brackets == '(' || brackets == '[')
            {
                return false;
            }
            break;

        case ']':
            brackets = s.top();
            s.pop();
            if (brackets == '(' || brackets == '{')
            {
                return false;
            }
            break;
        }
    }
    return (s.empty());
}
int main()
{
    string parenthesis = "{()}(){}";
    if (isBalanced(parenthesis))
    {
        cout << "Balanced"<<endl;
    }
    else
    {
        cout << "Not Balanced"<<endl;
    }
    return 0;
}

