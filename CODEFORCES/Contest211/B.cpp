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
//const int N= ;

signed main()
{ 
    fastio();
    ll n,k;
    cin>>n>>k;

    int ans=INT_MAX;
    int m=0;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[n-k+1];
    int A=0;
    while(A<n-k+1){
        int sum=0;
        for(int j=A;j<A+k;j++){
            sum+=arr[j];
        }
        arr2[A]=sum;
        A++;
    }
   
    int mini=INT_MAX;
    int y=-1;
    for(int i=0;i<n-k+1;i++){
        if(arr2[i]<mini){
            mini=arr2[i];
            y=i;
        }
    }
    cout<<y+1;
    


  return 0;
}
