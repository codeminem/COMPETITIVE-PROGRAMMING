//जय हनुमान जी!
#include<iostream>
#include<algorithm>
#include<string>
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
    string s,t;
    bool satisfy=false;
    bool satisfy1=false;
    bool satisfy2=false;
    bool satisfy4=false;
    string out="";
    cin>>s;
    cin>>t;
    int n=s.length();
    char A_s[n];
    rep(i,n){
        A_s[i]=s[i];
    }
    char A_t[n];
    rep(i,n){
        A_t[i]=t[i];
    }
   
    rep(i,n){
        if(((int) A_t[i]-(int)A_s[i])>1 ){
            int m= (((int)A_s[i])+1);
            if(m<=122 && m>=97){
                A_s[i]=(char)m;
                satisfy=true;
                break;
            }
        }
        if(((int) A_s[i]<(int)A_t[i]) && i<n-1 && satisfy==false){
            int m= (((int)A_s[i+1])+1);
            if(m<=122 && m>=97){
                A_s[i+1]=(char)m;   
                satisfy1=true;
                break;
            }
        }
        if(((int) A_t[i]-(int)A_s[i])==1  && satisfy==false && satisfy1==false){
            for(int A=i+1;A<n;A++){
                if((int)A_t[A]>97){
                    satisfy4=true;
                    break;
                }
            }
            if(satisfy4){
                int m= (((int)A_s[i])+1);
                if(m<=122 && m>=97){
                    A_s[i]=(char)m;
                }
                
                for(int A=i+1;A<n;A++){
                    A_s[A]=(char)(97);
                }
            }
        }

    }
    if( satisfy==false &&  satisfy1==false && satisfy2==false){
        cout<<"No such string" ;
    }
    else{

        rep(i,n){
            out+=A_s[i];
        }
        cout<<out;
    }
   
    return 0;
}
