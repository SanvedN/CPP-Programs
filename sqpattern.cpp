#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=1; //no of stars I want to print
    for(int i = 1;i<=n;i++)
    {
        for(int j=m;j<=n;j++)
            cout<<i+j<<" ";
        for(int k=1;k<=m;k++)
            cout<<" * ";
        for(int k=i;k>=1;k--)
            cout<<k<<" ";
        m++;
        cout<<endl;
    }
    return 0;
}