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

int lcs(char* X,char* Y,int m,int n,vector<vector<int> >& dp ){
    if(m==0 || n==0){
        return 0;
    }
    if(X[m-1]==Y[n-1]){
        return dp[m][n]=1+lcs(X,Y,m-1,n-1,dp);
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    return dp[m][n]=max(lcs(X,Y,m-1,n,dp),lcs(X,Y,m,n-1,dp));
}

signed main()
{ 
    fastio();
    char X[]="AGGTAB";
    char Y[]="GXTXYAB";
    int m=strlen(X);
    int n=strlen(Y);
    vector<vector<int> >dp(m+1,vector<int>(n+1,-1));
    cout<<"len of lcs is"<<lcs(X,Y,m,n,dp);
    
    return 0;
}
