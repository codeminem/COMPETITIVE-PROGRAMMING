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
#define MOD1 998244353
#define nline "\n" 
typedef long long ll;
typedef unsigned long long ull;
int gcd(int a,int b){if(b>a){return gcd(b,a);}if(b==0){return a;}return gcd(b,a%b);}
bool revsort(int a,int b){return a>b;}


string s;
vector<int>memo;
int dp(int i){
    if(i==s.size()) return 1;
    if(memo[i]!=1) return memo[i];
    if(i==s.size()) return 1;
    int ans=0;
    if(s[i]>='1' && s[i]<='9') {
        ans+= dp(i +1);
    }
    if( i+1<s.size() && s[i]=='1'){
        ans+=dp(i+2);
    }
    if( i+1<s.size() && s[i]=='2' && s[i+1]<='6'){
        ans+=dp(i+2);
    }
    return memo[i];

}
int main()
{
    while(1){
        cin>>s;
        if(s[0]='0') break;
        memo.clear();
        memo.resize(s.size(),-1);
        cout<<dp(0);
        
        

    }

  return 0;
}