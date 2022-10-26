//जय हनुमान जी!
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
const int N= 1e6+7;
ll memo[107][107];

ll n,m;
ll A[N];
bool sixDivSum(int index,int sum,int m){
    if (index>=n) return INT_MAX;
    if(memo[index][sum]!=-1) return memo[index][sum];
    bool ans=false;
    bool satisfy1=false;
    bool satisfy2=false;
    if(sixDivSum(index+1,sum+A[index],m)%m){
        satisfy1=true;
    }
    ans|=satisfy1;
    //exclude a[index] in the sum
    if(sixDivSum(index+1,sum,m)%m){
        satisfy2=true;
    }
    ans|=satisfy2;
    return memo[index][sum]=ans;
}




signed main()
{ 
    fastio();
    cin>>n>>m;
    memset(memo,-1,sizeof(memo));
    repll(i,n){
        cin>>A[i];
    }
    cout<<sixDivSum(0,0,m);
    


    return 0;
}
