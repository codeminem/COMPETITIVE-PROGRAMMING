#include <iostream>
using namespace std;
int binomialcoeff(int n,int k)
{
    int res=1;
    if(k>n-k)
    {
        k=n-k;
    }

    for ( int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;

}
int main()
{
    int n=8,k=5;
    cout<<binomialcoeff(n,k);
}