//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
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

vector<int> pairs[1001];
void solve(){
    int n;
    cin>>n;
    vector<int>id[1001];
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        id[x].push_back(i);
    }
    int ans=-1;
    for(int i=1;i<=1000;++i){
        for(int j:pairs[i]){
            if(!id[i].empty() && !id[j].empty()){
                ans=max(ans,id[i].back()+id[j].back());
            }

        }
    }
    cout<<ans<<endl;
}
signed main()
{ 
    fastio();
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
