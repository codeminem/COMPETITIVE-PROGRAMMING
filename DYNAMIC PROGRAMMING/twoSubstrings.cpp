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
    int x,y;
    string s;cin>>s;
    bool AB=false;
    vector<int>BA_index;vector<int>AB_index;

    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            x=i;
            AB_index.push_back(x);     
        }
        if(s[i]=='B' && s[i+1]=='A'){
            y=i;
            BA_index.push_back(y);
        }
    }
    for(int i=0;i<AB_index.size();i++){
        for(int j=0;j<BA_index.size();j++){
            if(abs(AB_index[i]-BA_index[j])>=2){
                AB=true;
                break;
            }
        }
        if(AB){
            break;
        }
    }
    if(AB){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
