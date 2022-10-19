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
  int n,count(0);
  int arr[n];
  cin>>n;
  rep(i,n){
    cin>>arr[i];
  }
  rep(i,n){
    if(i>0){
      if(arr[i]==1 && arr[i-1]==1) arr[i]=0;
      if(arr[i]==2 && arr[i-1]==2) arr[i]=0;
      if(arr[i]==3 && arr[i-1]==1) arr[i]=2;
      if(arr[i]==3 && arr[i-1]==2) arr[i]=1;
    }
    if(arr[i]==0) count++;
  }
  cout<<count;
  return 0;
}
