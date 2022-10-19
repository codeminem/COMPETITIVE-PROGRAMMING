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
//const int N= ;
signed main()
{ 
  fastio();
    int n;
    cin>>n;
    int a[n];
    int dp[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=1;
    }
    for(int i=0;i<n;i++){
        //dp[i]->lis if it ends on ith index
        for(int j=0;j<n;j++){
            if(a[j]<=a[i]){   //if it is not mentioned that it has to be strictly increasing
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int lis=1;
    for(int i=0;i<n;i++){
        lis=max(lis,dp[i]);
    }
    cout<<lis;

  return 0;
}
