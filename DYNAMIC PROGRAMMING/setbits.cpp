#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<n;i++){
        dp[i]=dp[i/2]+(i%2);
        cout<<dp[i]<<endl;
    }

    return 0;
}