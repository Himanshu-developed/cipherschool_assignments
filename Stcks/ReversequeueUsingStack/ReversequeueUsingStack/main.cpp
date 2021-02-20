#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverseQueue(queue<int> &Queue)
{
    stack<int> s;
    while (!Queue.empty()) {
        s.push(Queue.front());
        Queue.pop();
    }
    while (!s.empty()) {
        Queue.push(s.top());
        s.pop();
    }
}
void print(queue<int>& Queue)
{
    while (!Queue.empty())
    {
        cout<<Queue.front()<<endl;
        Queue.pop();
    }
}
int main()
{
    queue<int> ob;
    ob.push(5);
    ob.push(20);
    ob.push(12);
    ob.push(22);
    ob.push(89);
    reverseQueue(ob);
    print(ob);
}

