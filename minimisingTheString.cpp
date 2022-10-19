//जय हनुमान जी!
#include<iostream>
#include<string>
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
    int n,pos;
    cin>>n;
    int maxi=INT_MIN;
    string s1;
    cin>>s1;
    char A[n];
    rep(i,n){
        A[i]=s1[i];
    }
    
    rep(i,n){
        if(A[i]>A[i+1]){
            pos=i;
            A[pos]=-1;
            break;
        }
    }

    string s="";
    rep(i,n){
        if((int)A[i]!=-1){
            s+=A[i];
        }
    }
    cout<<s;




    return 0;
}
