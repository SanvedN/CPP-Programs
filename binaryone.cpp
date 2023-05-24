//program to check number of times 1 occurs in a binary number
#include<iostream>
using namespace std;
int main()
{
    uint32_t i; //assuming that it is a binary number
    cin>>i;
    int c=0;
    while(i != 0)
    {
        if(i&1)
            c++;
        i = i>>1;
    }
    cout<<c;
    return 0;
}