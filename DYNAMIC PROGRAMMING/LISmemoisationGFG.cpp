#include<iostream>
#include<algorithm>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define rep(i, n) for(int i = 0; i < n; i++)
#define repll(i, n) for(long long i = 0; i < n; i++)
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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


int f(int index,int prv_index,int n,int a[], vector<vector<int> >&dp){
    if(index==n){
        return 0;
    }
    if(dp[index][prv_index+1]!=-1){
        return dp[index][prv_index+1];
    }
    int notTake=f(index+1,prv_index,n,a,dp);
    int take=INT_MIN;
    if(prv_index==-1 ||a[index]>a[prv_index]){
        take= 1+f(index+1,index,n,a,dp);
    }
    return dp[index][prv_index+1]=max(take,notTake);
}

int longestSubsequence(int n, int a[])
{
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, -1));
    return f(0, -1, n, a, dp);
}
signed main()
{ 
    fastio();
    int a[] = { 3, 10, 2, 1, 20 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Length of lis is " << longestSubsequence(n, a);
    return 0;

    return 0;
}
