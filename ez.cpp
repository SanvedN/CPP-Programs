#include<iostream>
using namespace std;
class ab
{
    int x,y;
    public :
    ab()
    {
        x=0;
        y=0;
    }
    ab(int a, int b)
    {
        x=a;
        y=b;
    }
    ab(const ab &b)
    {
        x = b.x;
        y = b.y;
    }
    void print()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    ab a,b;
    a.print();
    b.print();
    ab c(10,20);
    c.print();
    ab d(c);
    d.print();
    return 0;
}