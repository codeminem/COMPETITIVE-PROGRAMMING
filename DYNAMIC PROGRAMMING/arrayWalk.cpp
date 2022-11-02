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
int n,k,z;    //z=min(5,k) no two consecutive left moves and at max z left moves||k->total moves
int A[(int)1e5+7];   

int dp(int index,int total_moves,int left_check,int left_moves){
    int sol=0;
    if(total_moves<0){
        return 0;
    }
    if(left_check){
        dp(index+1,total_moves-1,0,left_moves);
    }
    else{
        if(index>0 && left_moves>0){
            sol=dp(index-1,total_moves-1,1,left_moves-1);
        }
        if(index<n-1){
            sol=max(sol,dp(index+1,total_moves-1,0,left_moves));
        }
    }
    return sol+A[index];


}

signed main()
{ 
    fastio();
    int t;
    while(t--){
        // 5 4 0
        // 1 5 4 3 2
        cin>>n>>k>>z;
        z=min(5,k);
        rep(i,n){
            cin>>A[i];
        }
        cout<<dp(0,k,0,z)<<endl;
        dp.clear();
    }

    return 0;
}
