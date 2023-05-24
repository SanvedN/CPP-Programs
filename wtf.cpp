#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char one[]="one";
    char two[]="two";
    if(one==two)
    cout<<"equal";
    if(strcmp(one,two)==0)
    cout<<"equal";
    else
    cout<<"notequal";
}