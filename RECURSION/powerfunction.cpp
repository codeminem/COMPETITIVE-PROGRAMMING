#include<iostream>
using namespace std;
int power_a(int a,int n){
    if(n==0){
        return 1;
    }
    return a*power_a(a,n-1);

}
int fastPower(int a,int n){
    if(n==0){
        return 1;
    }
    int subProb=fastPower(a,n/2);
    int subProbSq=subProb*subProb;
    if(n&1){ //if n is odd
        return a*subProbSq;
    }
    return subProbSq;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power_a(a,n);
    cout<<fastPower(a,n);
    return 0;
}