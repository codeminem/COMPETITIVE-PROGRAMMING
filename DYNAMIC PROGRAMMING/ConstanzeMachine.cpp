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
    fastio();
    mc;
    while(t--){
        int n;
        cin>>n;
        int A[n+1];
        for(int i=0;i<=n;i++){
            A[i]=i;
        }
        A[0]=-1;

        int B[n+1];
        for(int i=0;i<=n;i++){
            B[i]=-2;
        }
        for(int j=1;j<=n;j++){
            for(int i=1;i<=n;i++){
                if((A[i]!=B[j-1]+1 || A[i]!=B[j-1]-1) && A[i]!=-1){
                    B[j]=A[i];
                    A[i]=-1;
                    break;
                }
            }
            cout<<j;
        }
        
        for(int i=1;i<=n;i++){
            cout<<B[i]<<endl;
        }
        
    }

    return 0;
}

