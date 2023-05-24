#include<iostream>
using namespace std;
class calci
{
    int a,b;
    public :
    calci()
    {
        a=0;
        b=0;
        cout<<"Constructor is called "<<endl;
    }
    void in()
    {cin>>a>>b;}
    void add()
    {cout<<a+b<<endl;}
    void sub()
    {cout<<a-b<<endl;}
    void mul()
    {cout<<a*b<<endl;}
    void div()
    {cout<<a/b<<endl;}
    void rem()
    {cout<<a%b<<endl;}
};
int main()
{
    calci x;
    x.in();
    x.add();
    x.sub();
    x.mul();
    x.div();
    x.rem();
    return 0;
}