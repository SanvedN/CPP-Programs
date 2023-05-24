#include<iostream>
using namespace std;
class cmp
{
    
    public :
        int r,i;
        cmp(){
        }
        cmp(int x, int y)
        {
            r=x;
            i=y;
        }
        cmp operator++()
        {
            cmp c;
            c.r = r*2;
            c.i = i*2;
            return c;
        }
        void print()
        {
            cout<<r<<" + "<<i<<"i"<<endl;
        }
};
int main()
{
    
    int a,b;
    cout<<"Enter real value of complex number 1 "<<" : ";
    cin>>a;
    cout<<"Enter imaginary value of complex number 1 "<<" : ";
    cin>>b;
    cmp x(a,b);
    cout<<"Enter real value of complex number 2 "<<" : ";
    cin>>a;
    cout<<"Enter imaginary value of complex number 2 "<<" : ";
    cin>>b;
    cmp y(a,b);
    cmp c = x++;
    cout<<"First Complex Number is : ";
    x.print();
    cout<<"Second Complex Number is : ";
    y.print();
    cout<<"Addition is : ";
    c.print();
    return 0;
}