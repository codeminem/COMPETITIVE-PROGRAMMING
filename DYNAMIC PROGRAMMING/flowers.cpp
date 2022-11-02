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
const int N=1e6+7;
int dp[N];
int s[N];

signed main()
{ 
    fastio();
    int t,k;cin>>t>>k;
    dp[0]=1;
    for(int i=1;i<N;i++){
        dp[i]=dp[i-1];
        if(i>=k){
            dp[i]+=dp[i-k];
            if(dp[i]>=MOD){
                dp[i]-=MOD; 
            }

        }
    }
    for(int i=1;i<N;i++){
        s[i]=s[i-1]+dp[i];
        if(s[i]>MOD){
            s[i]-=MOD;
        }
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(s[b]-s[a-1])%MOD;
        cout<<endl;

    }

    return 0;
}
