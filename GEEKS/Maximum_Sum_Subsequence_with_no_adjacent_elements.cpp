//dp[i][1]=dp[i-1][0]+ arr[i]
//dp[i][0]=arr[i] exluded
//dp[i][1]=arr[i] included 
//dp[i][0]=max(dp[i-1][0],dp[i-1][1])
#include<iostream>
#include<vector>
using namespace std;
int findMaxSum(vector<int> arr, int N)
{
    //declaration of the dp array
    int dp[N][2];
    if (N==1){
        return arr[0];
    }
    //intitialise values in the 2d array as per above logic
    dp[0][0]=0;
    dp[0][1]=arr[0];

    for(int i=0;i<N;i++){
        dp[i][1]=dp[i-1][0]+arr[i];
        dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
    }
    return max(dp[N-1][0], dp[N-1][1]);

}
//driver code
int main()
{
    vector<int> arr={5,5,10,100,10,5};
    int N =arr.size();
    cout<<findMaxSum(arr,N)<<endl;
    return 0;

}
  