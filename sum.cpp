//program to input a number and find difference between and product of its digits
#include<iostream>
using namespace std;
int main()
{ 
    int a;
    cin>>a;
    int s=0,p=1;
    while(a!=0)
    {
        s += a%10;
        p *= a%10;
        a /= 10;
    }
    cout<<p-s<<endl;
    return 0;
}