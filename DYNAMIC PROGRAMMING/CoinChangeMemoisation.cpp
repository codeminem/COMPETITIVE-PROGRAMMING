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

int coinChange(vector<int>& a,int v,int n,vector<vector<int>>& dp){
    if(v==0) return dp[n][v]=1;
    if(n==0) return 0;
    if(dp[n][v]!=-1) return dp[n][v];
    if(a[n-1]<=v) return dp[n][v]=coinChange(a,v-a[n-1],n,dp)+coinChange(a,v,n-1,dp);
    else return dp[n][v]=coinChange(a,v,n-1,dp);
}

signed main()
{ 
    fastio();
    int n,v;
    n=3;
    v=4;
    vector<int>a={1,2,3};
    vector<vector<int> > dp(n + 1,vector<int>(v + 1, -1));
    int res=coinChange(a,v,n,dp);
    cout<<res<<endl;


    return 0;
}
