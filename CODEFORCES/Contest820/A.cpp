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
ll a,b,c;
signed main()
{ 
  fastio();
  mc;
  while(t--){
    ll time1,time2,time3,time4;
    cin>>a>>b>>c;
    if(a>1){
        time1=a-1;
    }
    else{
        time1=1-a;
    }
    time3=b-c;
    if(time3<0){
        time3=-time3;
    }
    time4=c-1;
    if(time4<0){
        time4=-time4;
    }
    time2=time3+time4;

    if(time1<time2){
        cout<<1<<endl;
    }
    else if(time2<time1){
        cout<<2<<endl;
    }
    else if(time2=time1){
        cout<<3<<endl;
    }
    time1=0,time2=0,time3=0,time4=0;
    
    
  }

  return 0;
}
