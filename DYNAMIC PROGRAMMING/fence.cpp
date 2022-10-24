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

signed main()
{ 
    fastio();int n,k,sum2=0;
    cin>>n>>k;
    int A[n];
    vector<int>B;
    vector<int>C;
    rep(i,n){
        cin>>A[i];
    }

    int sum;
    rep(i,k){
        sum+=A[i];
    }
    B.push_back(sum);
    for(int i=0;i<n;i++){
        if(i+k<n){
            sum+=(A[i+k]-A[i]);
            B.push_back(sum);
        }
        
    }
    rep(i,B.size()){
        C.push_back(B[i]);
    }
    
    sort(C.begin(),C.end());
    int x=C[0];
    for(int i=0;i<n;i++){
        if(B[i]==x){
            cout<<i+1;
            break;
        }
    }

    return 0;
}
