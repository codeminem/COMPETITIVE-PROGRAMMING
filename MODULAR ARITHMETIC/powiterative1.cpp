#include<iostream>
using namespace std;
int power(int x,int y)
{
    if(y==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    return x*power(x,y-1);
}
int main()
{
    int x=2;
    int y=3;
    cout<<(power(x,y));
}