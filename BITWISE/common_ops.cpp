#include<iostream>
using namespace std;
int GetIthBit(int n,int i){
    int mask=(1<<i);
    return (n & mask ) >0 ?1 :0;
}
void SetIthBit(int &n,int i){
    int mask =(1<<i);
    n=(n|mask);
}
void clearIthbit(int n,int i){
    int mask=~(1<<i);
    n=n&mask;
}
int main()
{
    int n=5;
    int i;
    cin>>i;
    cout<<GetIthBit(n,i)<<endl;
    
    return 0;
}