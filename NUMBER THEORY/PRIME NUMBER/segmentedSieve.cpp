//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
#define N 100000

int sieveArr[N+1]={0};
vector<int> primes;
void sieve(){
  for(ll i=2;i<=N;i++){
    if(sieveArr[i]==0){
      primes.push_back(i);
        for (ll j=i*i;j<=N;j+=i){
          sieveArr[j]=1;
        }
    }
  }
}

int main()
{
  sieve();
  int t;
  cin>>t;
  while(t--){
    int m,n;
    cin>>m>>n;
    vector<int>segment(n-m+1,0);
    for(auto p:primes){
      //stop when p^2>n
      if(p*p>n){
        break;
      }
      //otherwise find the nearest starting point
      int start=(m/p)*p;
      for(int j=start;j<=n;j+=p){
        if(j<m){
          continue;
        }
        segment[j-m]=1;
      }
    }
    //primes stored as 0 in the segment

  }


  return 0;
}