#include <iostream>
using namespace std;
const char dataTable[10][5]= { "", "", "abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz" };
void generateCode(int data[], int cPos,char output[], int n)
{
    int i;
    if (cPos == n)
    {
        cout<<output<<endl;
        return;
    }
    for (i = 0; i < strlen(dataTable[data[cPos]]);i++)
    {
        output[cPos]= dataTable[data[cPos]][i];
        generateCode(data, cPos + 1, output, n);
        if (data[cPos] == 0|| data[cPos] == 1)
        {
            return;
        }
    }
}
void getCode(int data[], int n)
{
    char code[n + 1];
    code[n] = '\0';
    generateCode(data, 0, code, n);
}

int main()
{
    int data[] = { 2, 3, 4 };
    int n = sizeof(data) / sizeof(data[0]);
    getCode(data, n);
    return 0;
}

