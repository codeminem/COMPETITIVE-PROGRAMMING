//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<map>
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
int A;
//const int N= ;
//f(i)->best ending for number(i)
//f(i)=f(i-1)+1 where i are numbers & no. are of order 1e9.
//use maps thereby
int s;
int j=0;
signed main()
{ 
  fastio();
    int n;
  cin>>n;
    int a[n];
  rep(i,n){
    cin>>a[i];
  }
    
    map<int,int> dp;
    rep(i,n){
        dp[a[i]]=dp[a[i]-1]+1;
    }
    int k=0;
    for(auto x:dp){
        k=max(k,x.second);
    }
    vector<int> res;
    for(auto x:dp){
        if (k==x.second){
             A=x.first;
        }
    }
    for(int i=A;i>A-k;i--){
        res.push_back(i);
    }
    
    cout<<k<<endl;
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        for(j=j;j<n;j++){
            if (a[j]==res[i]){
                cout<<j+1<<" ";
                res[i]=-1;
                s=j;
                j=0;
                j+=s;
            }
        }
       
    }
    
    
  return 0;
}
