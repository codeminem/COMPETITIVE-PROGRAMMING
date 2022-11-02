#include<iostream>
#include<algorithm>
#include<vector>
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define rep(i, n) for(int i = 0; i < n; i++)
#define repll(i, n) for(long long i = 0; i < n; i++)
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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

ll pis(ll arr[],ll n){
    ll mpis[n];
    for(int i=0;i<n;i++){
        mpis[i]=arr[i];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j] && mpis[i]<mpis[j]*arr[i]){
                mpis[i]=mpis[j]*arr[i];
            }
        }
    }
    return *max_element(mpis,mpis+n);
}

signed main()
{ 
    fastio();
    ll n;cin>>n;
    ll A[n];
    repll(i,n){
        cin>>A[i];
    }
    cout<<pis(A,n);

    return 0;
}
