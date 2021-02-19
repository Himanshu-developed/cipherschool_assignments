#include<iostream>
#include <stack>
using namespace std;

class node {
public:
        int item;
        node(int data)
    {
            item = data;
    }
        node *next;
};
bool isPalindrome(node* head)
{
        node *slow= head;
        stack <int> s;
        while(slow != NULL)
        {
                s.push(slow->item);
                slow = slow->next;
        }
        while(head != NULL )
        {
            int i=s.top();
            s.pop();
            if(head -> item != i)
            {
                return false;
            }
        head=head->next;
        }

return true;
}
int main()
{
    node one = node(1);
    node two = node(2);
    node three = node(3);
    node four = node(2);
    node five = node(1);
    five.next = NULL;s
    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = &five;
    int result = isPalindrome(&one);

    if(result == 1)
            cout<<"isPalindrome is true\n";
    else
        cout<<"isPalindrome is true\n";

return 0;
}

