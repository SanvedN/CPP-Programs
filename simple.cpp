#include<iostream>
using namespace std;
class abc
{
    int x,y;
    public :
    abc()
    {
        x=0;
        y=0;
        cout<<"Default Constructor is called "<<endl;
    }
    void assign(int a,int b)
    {
        x=a;
        y=b;
    }
    void add()
    {
        cout<<x+y<<endl;
    }
};
int main()
{
    abc a;
    int x,y;
    cout<<"Enter two numbers ";
    cin>>x>>y;
    a.assign(x,y);
    a.add();
    return 0;
}