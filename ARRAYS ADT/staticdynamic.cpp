#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[5];//
    p[0]=3;
    p[1]=3;
    p[2]=3;
    p[3]=3;
    p[4]=3;
    for(int i=0;i<5;i++){
        cout<<p[i];
    }
    return 0;
}