//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<unordered_set>
#include<queue>
#include<stack>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
#define N 1000000
void primeSieve(vector<ll> &sieve){
  sieve[0]=sieve[1]=0;
  for(ll i=2;i<=N;i++){
    if(sieve[i]){
      for(ll j=i*i;j<=N;j+=i){
        sieve[j]=0;
      }
    }
  }
}
int main()
{
  vector<ll> sieve(N,1);
  primeSieve(sieve);
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  for(ll i=0;i<n;i++){
    
    if(sieve[sqrt(arr[i])] && sqrt(arr[i])==(int)sqrt(arr[i])){
      cout<<"YES"<<endl;
    }
    
    else{
      cout<<"NO"<<endl;
    }
  }
  
  return 0;
}