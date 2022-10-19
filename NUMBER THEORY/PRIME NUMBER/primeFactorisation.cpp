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

void factorise(int n){
  for(int i=2;i<=n;i++){
    if(n%i==0){
      int count=0;
      while(n%i==0){
        n/=i;
        count++;
      }
      cout<<i<<"^"<<count<<"";
    }
  }
}
int main()
{
  int n;
  cin>>n;
  factorise(n);

  return 0;
}