//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include <climits>
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


void solve(){
    int n,k,j;
    cin>>n>>k;
    int H[n];
    rep(i,n){
        cin>>H[i];
    }
    vector<ll>dp(n,mod);
    //base case
    dp[0]=0;
    dp[1]=abs(H[1]-H[0]);

    //recursive case
    for(int i=0;i<n;i++){
        for(j=i+1;j<=i+k;j++){
            if(j<n){
                dp[j]=min(dp[j],dp[i]+abs(H[j]-H[i]));
            }
        }
    }
    cout<<dp[n-1]<<endl;
    
}

signed main()
{ 
    fastio();
    solve();
    return 0;
}
