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

int largestSubset(int a[],int n){
    int dp[n];
    dp[n-1]=1;
    for(int i = n-2;i>=0;i--){
        int mxm=0;
        for(int j=i+1;j<n;j++){
            if(a[i]%a[j] || a[j]%a[i]){
                mxm=max(mxm,dp[j]);
            }
            dp[i]=mxm+1;
        }
    }
    return *max_element(dp,dp+n);
}

signed main()
{ 
    fastio();
    int a[] = { 1, 3, 6, 13, 17, 18 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << largestSubset(a, n) << endl;
    return 0;

    return 0;
}
