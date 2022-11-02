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

int dp(int n){
    int A[n+1],B[n+1];
    A[0]=1,A[1]=0,B[0]=0,B[1]=1;
    for(int i=2;i<=n;i++){
        A[i]=A[i-2]+2*B[i-1];
        B[i]=A[i-1]+B[i-2];
    }
    return A[n];
}

signed main()
{ 
    //3xn board and 2x1 tiles
    fastio();
    int n;cin>>n;
    cout<<dp(n);

    return 0;
}
