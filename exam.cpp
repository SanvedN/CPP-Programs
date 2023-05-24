#include<iostream>
using namespace std;
void add()
{
    static int s=1;
    s++;
    cout<<s;
}
int main()
{
    add();
    add();
    add();
    return 0;
}