//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
typedef vector<int> vi;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define mc int t; cin>>t
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}
//###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~###~~

vector<int>memo;
string s;

int dp(int i){
    if(i==s.size()) return 1;
    if(memo[i]!=-1) return memo[i];
    int ans=0;
    if(s[i]>='1' && s[i]<='9'){
        ans+=dp(i+1);
    }
    if(i+1<s.size() && s[i]=='1' && s[i+1]<='9'){
        ans+=dp(i+2);
    }
     if(i+1<s.size() && s[i]=='2' &&s[i+1]<='6'){
        ans+=dp(i+2);
    }
    return memo[i]=ans;
}

int main()
{ 
    fastio();
    //mc;
    cin>>s;
    while(1){
        cin>>s;
        if(s[0]=='0') break;
        memo.clear();
        memo.resize(s.size(),-1);
        cout<<dp(0)<<endl;;
    }
  return 0;
}