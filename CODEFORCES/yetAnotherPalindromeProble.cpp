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
        bool satisfy1=false;
        int n,i,j,k;
        cin>>n;
        int arr[n];
        int arr_count[5005]={0};
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(arr[j]==arr[k]){
                    if(j!=k && k-j>1){
                        satisfy1=true;
                        break;
                    }
                }
            }
            if(satisfy1){
                break;
            }
        }
        if(satisfy1==true ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        satisfy1=false;

    }

    return 0;
}
