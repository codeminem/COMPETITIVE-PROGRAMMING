// to find nth catlan no. in O(n) time
//use cn= 1/n+1(2nCn)
#include<iostream>
using namespace std;
unsigned long int binomialcoeff(unsigned int n, unsigned int k)
{
    unsigned long int res=1;
    if(k>n-k)
    k=n-k;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}

//we can now calculate 2nCn/(n+1)
unsigned long int catalan (unsigned int n)
{
    unsigned long int c= binomialcoeff(2*n,n);
    return c/(n+1);
}

//now driver code
int main()
{
    for (int i=0;i<10;i++){
        cout<<catalan(i)<< " ";
        return 0;
    }
}