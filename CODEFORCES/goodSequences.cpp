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
const int N=1e5+1;
int dp_prime[N];

// complexity O(sqrt(n))
vector<int> give_prime_divisors(int n){
    vector<int>div;
    if(n==1) return div;
    for(int i=2;i*i<=n;i++){    
        if(n%i==0){
            div.push_back(i);
            while(n%i==0) n/=i;
        }
    }
    if(n>1) div.push_back(n);
    return div;
}
signed main()
{ 
  fastio();
  int n;
  cin>>n;
  int a[n];
  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){

    vector<int> prime_div = give_prime_divisors(a[i]);
    int best_ending=0;
    for(auto x:prime_div){
        if(x>1){
        best_ending=max(best_ending,dp_prime[x]);
        }
    }
    for(auto x:prime_div){
        if(x>1){
            dp_prime[x]= best_ending+1;
        }
    }
  }
    if(*max_element(dp_prime,dp_prime+N)==0){
        cout<<1;
    }
    else{
        cout<<*max_element(dp_prime,dp_prime+N);
    }
  
  return 0;
}
