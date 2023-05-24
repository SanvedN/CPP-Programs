#include<iostream>
using namespace std;
class prime
{
    int n;
    public:
    prime(int n)
    {
        n=0;
        cout<<"Parameterised Constructor Called "<<endl;
    }
    void assign(int x)
    {
        n=x;
    }
    bool checkPrime()
    {
        bool check=true;
        for(int i = 2;i<n;i++)
        {
            if(n%i==0)
            {
                check=false;
                break;
            }
        }
        return check;
    }
};
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    prime p(n);
    if(n==0)
    cout<<"0 is neither prime nor composite"<<endl;
    if(n==1)
    cout<<"1 is neither prime nor composite"<<endl;
    else
    {
        p.assign(n);
        if(p.checkPrime()== 0)
        cout<<n<<" is a composite number"<<endl;
        else
        cout<<n<<" is a prime number "<<endl;
    }
}