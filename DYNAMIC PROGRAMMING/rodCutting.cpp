//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
typedef vector<int> vi;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}

int memo[100000];
//space complexity o(n);


int dp(int n,int prices[]){
    if(n==0) return 0;
    if(memo[n]!=-1) return memo[n];
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,prices[i]+dp(n-i,prices));
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int prices[n+1];
    for(int i=1;i<=n;i++){
        cin>>prices[i];
    }
    memset(memo,-1,sizeof(memo));
    cout<<dp(n,prices);

  return 0;
}