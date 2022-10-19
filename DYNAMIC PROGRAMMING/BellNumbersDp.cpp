//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define mc int t; cin>>t
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                DONT CHANGE ANYTHING ABOVE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
const int mod= 1e9+7;


int countP(int n,int k){
    //table for memoisation and also calculation of subproblems
    int dp[n+1][k+1];
    //base case
    rep(i,n){
        dp[i][0]=0;
    }
    rep(i,n){
        dp[0][i]=0;
    }

    // recursive case
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || i==j){
                dp[i][j]=1;
            }
            else{
                dp[i][j]=j*dp[i-1][j]+ dp[i-1][j-1];
            }
        }
    }
    return dp[n][k];
}

signed main()
{ 
    fastio();
    cout<<countP(5,2);

    return 0;
}
