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
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vector<ll>a(n);
    for(auto& e:a) cin >> e;
    int element_checker=-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]== 1){
            element_checker=i;
            break;
        }
    }
    if(element_checker== -1){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    vector<vector<ll> >  dp(n,vector<ll>(2,0));
    if(s[0]==1) dp[0][1]=a[0];
    for(int i=1;i<n;i++){
        if(s[i]==0){
            dp[i][0]=max (dp[i-1][0],dp[i-1][1]);
        }
        else{
            dp[i][0]=dp[i-1][0]+a[i-1];
            dp[i][1]=max(dp[i-1][0],dp[i-1][1])+a[i];
        }
    }
    cout<<max(dp[n-1][0],dp[n-1][1]);

}


signed main()
{ 
    fastio();
    int t;cin>>t;
    while(t--){
       solve();
    }
    return 0;
}
