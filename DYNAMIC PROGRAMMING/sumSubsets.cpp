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
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                                                DONT CHANGE ANYTHING ABOVE THIS LINE!
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
const int mod= 1e9+7;
const int N= 1000;
int a[N],n,sum;
vector<vector<int>> memo;

//whether sum is possible from subset of a[......index]
int subsetSum(int index,int sum){
    //base case when no elements are left for sum
    if (index==-1) return (sum==0);
    //memoisation
    if(memo[index][sum]!=-1) return memo[index][sum];
    bool ans=false;
    //include a[index] in sum
    if(sum>=a[index]){
     ans|=subsetSum(n-2,sum-a[index]);
    }
    //exclude a[index] in the sum
    ans|=subsetSum(n-2,sum);
    return memo[index][sum]=ans;
}
signed main()
{ 
  fastio();
  cin>>sum>>n;
  memo.resize(n,vector<int>(sum+1,-1));
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<subsetSum(n-1,sum);

  return 0;
}

