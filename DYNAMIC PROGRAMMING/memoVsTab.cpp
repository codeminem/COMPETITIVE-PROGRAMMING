#include<iostream>
#include<vector>
#define pb push_back
int cnt=0;
vector<int>memo;
int fib(int n){
    cnt++;
    if(n<=2) return 1;
    //memoisation part
    if(memo[n]!=-1) return memo[n];
    //recursive relation
    return memo[n]=fib(n-1)+fib(n-2);
}
using namespace std;
int main()
{
    int n=6;
    memo.resize(n+1,-1);
    cout<<fib(n)<<endl;
    cout<<cnt<<endl;


    //tabulation
    int m=20;
    int fib2[n+1];
    fib2[1]=fib2[2]=1;
    for(int i=3;i<=n;i++){
        fib2[i]=fib2[i-1]+fib2[i-2];
    }

    return 0;
}   