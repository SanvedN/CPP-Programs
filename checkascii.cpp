//program to check if the given character is alpha-numeric or not
#include<iostream>
using namespace std;
int main()
{   
    char a;
    cin>>a;
    (a>=48 && a<=57 || a>=65 && a<=90 || a>=97 && a<=122)?cout<<"Alpha Numeric":cout<<"Not alpha numeric";
    return 0;
}