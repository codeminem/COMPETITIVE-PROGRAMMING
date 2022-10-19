//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#define int long long
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
const int N=1e6+5;
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                DONT CHANGE ANYTHING ABOVE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
const int mod= 1e9+7;
signed main()
{ 
  fastio();
  int n;
  cin>>n;
  int arr1[n],arr2[n];
  rep(i,n){cin>>arr1[i];}
  rep(i,n){cin>>arr2[i];}
  ll dp1[n],dp2[n],dp3[n];
  dp1[0]=arr1[0];
  dp2[0]=arr2[0];
  dp3[0]=0;
  rep(i,n-1){
    dp1[i+1]=max(dp2[i]+arr1[i+1],dp3[i]+arr1[i+1]);
    dp2[i+1]=max(dp1[i]+arr2[i+1],dp3[i]+arr2[i+1]);
    dp3[i+1]=max(dp1[i],dp2[i]);
  }
  cout<<max(dp1[n-1],dp2[n-1])<<endl;
  return 0;
}


