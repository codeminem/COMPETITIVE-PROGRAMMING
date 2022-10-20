//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
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
    int n;cin>>n;
    int H[n];
    rep(i,n){
        cin>>H[i];
    }
    int sum=0;
    vector<ll>dp(n);
    //base case
    dp[0]=0;
    dp[1]=abs(H[1]-H[0]);

    //recursive case
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(H[i]-H[i-1]),dp[i-2]+abs(H[i]-H[i-2]));
    }
    cout<<dp[n-1]<<endl;
    
}

signed main()
{ 
    fastio();
    solve();

    return 0;
}
