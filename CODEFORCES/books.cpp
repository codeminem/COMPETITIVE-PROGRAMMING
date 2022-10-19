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
int main()
{
    ll n,t;
    ll sum=0,count=0;
    cin>>n>>t;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(sum<t){
        for(ll i=0;i<n;i++){
            if(sum+arr[i]<t){
                sum+=arr[i];
                count++;
            }
        }
    }
    cout<<count;

  return 0;
}