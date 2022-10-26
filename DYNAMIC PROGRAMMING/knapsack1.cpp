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
const int N=2001;
ll W[N],V[N];
ll memo[N][N];
ll knapsack(ll index,ll weight){
    //base case
    if(index==0){
        return 0;
    }

    //memoisation
    ll &ans=memo[index][weight];
    if(ans!=-1) return ans;
    else{
        ans=0;
    }

    //recursive cases

    //include
    if(W[index]<=weight){
        ans=V[index]+knapsack(index-1,weight-W[index]);
    }
    //exclude
    ans=max(ans,knapsack(index-1,weight));
    return ans;
}


signed main()
{ 
    fastio();
    ll w,n;
    cin>>n>>w;  
    for(int i=1;i<=n;i++){
        cin>>W[i]>>V[i];
    }
    memset(memo,-1,sizeof(memo));
    cout<<knapsack(n,w);
    return 0;
}
