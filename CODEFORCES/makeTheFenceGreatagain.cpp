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
const int N= int(3e5)+5 ;

//dp[pos][add] last board with index pos we increase add
ll dp[3][N];
int ai[N];
int bi[N];
int n;

ll calc(int add, int pos){
    ll &res= dp[add][pos];
    if(res!=-1) return res;
    res=INT_MAX;
    if(pos==n) return 0;
    for(ll x=0;x<=2;x++){
        if(pos==0 || ai[pos] + x!=ai[pos-1]+add){
            res= min(res,calc(x,pos+1) + x*bi[pos]);
        }
    }
    return res;
}

signed main()
{ 
  fastio();
  mc;
  while(t--){
    cin>>n;
    rep(i,n){
        cin>>ai[i]>>bi[i];
    }
    //memoisation part to reduce time
    for(int i=0;i<n;i++){
        dp[0][i]=dp[1][i]=dp[2][i]=-1;
    }
    cout<<calc(0,0)<<endl;
   
  }

  return 0;
}
