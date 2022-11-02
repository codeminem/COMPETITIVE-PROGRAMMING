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

int lrs(string str){
    int n=str.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=0;
        }
    }
    //now let's fill the table
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(str[i-1]==str[j-1] && j!=i){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string res="";
    int i=n,j=n;
    while(i>0 && j>0){
        if(dp[i][j]=dp[i-1][j-1]+1){
            res=res+str[i-1];
            i--;
            j--;
        }
        else if(dp[i][j]=dp[i-1][j]){
            i--;
        }
        else{
            j--;
        }
    }
    reverse(res.begin(),res.end());
}

signed main()
{ 
    fastio();
    string str="AABEBCDD";
    cout<<lrs(str);

    return 0;
}
