//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<vector>
#define vi vector<int>
#define vil vector<long long>
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
// make the prefix maximums of the array: let 𝑚𝑖=max(𝑎1,…,𝑎𝑖). Then we need to find the largest 𝑖 such that 𝑚𝑖≤𝑘,

void solve(){
    int n,q;
    cin>>n>>q;
    vil pref;
    pref.push_back(0);
    vector<int> prefmax;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        pref.push_back(pref.back()+x);
        if(i==0){
            prefmax.push_back(x);
        }
        else{
            prefmax.push_back(max(prefmax.back(),x));
        }
    }
    for(int i=0;i<q;i++){
        int k;cin>>k;
        int ind= upper_bound(prefmax.begin(),prefmax.end(),k)-prefmax.begin();
        cout<<pref[ind]<<" ";
    }
    cout<<endl;

}
signed main()
{ 
    fastio();
    mc;
    while(t--){
        solve();
    }
    return 0;
}
