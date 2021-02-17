#include <iostream>

using namespace std;
void getParenthesis(int open,int close,string data)
{
if(open == 0 && close == 0)
{
cout<<data<<endl;
return;
}

if(open)
    getParenthesis(open-1,close,data+"[");
if(open<close)
    getParenthesis(open,close-1,data+"]");
}
int main()
{
    int n;
    cout<<"Enter the number of parenthesis::";
    cin>>n;
    getParenthesis(n, n, "");
    return 0;
}

