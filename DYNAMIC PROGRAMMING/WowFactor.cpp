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
    int num=1e6;
    fastio();
    string s;
    cin>>s;
    int A[num],count_total=0;
    vector<int>v;
    vector<int>o;
    
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='v' && s[i+1]=='v'){
            v.push_back(i);
        }
        if(s[i]=='o'){
            o.push_back(i);
        }
    }
    
    for(int i=0;i<o.size();i++){
        int count_before=0,count_after=0;
        int x=o[i];
        for(int j=0;j<v.size();j++){
            if(v[j]<x){
                count_before++;
            }
            if(v[j]>x){
                count_after++;
            }
        }
        count_total+=(count_before * count_after);
    }
    cout<<count_total;

    return 0;
}
